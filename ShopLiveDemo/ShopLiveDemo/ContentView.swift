//
//  ContentView.swift
//  ShopLiveDemo
//
//  Created by purpleworks on 2021/03/16.
//

import SwiftUI
import ShopLiveSDK

struct ContentView: View {
    
    @StateObject var model: ContentViewModel = ContentViewModel()
    @State var useToken: Bool = true
    @State var isActiveWebView: Bool = false
    
    var body: some View {
        NavigationView {
            VStack(alignment: .leading, spacing: 20) {
                inputView
                Spacer()
                NavigationLink(
                    destination: WebView(url: model.navigationUrl),
                    isActive: $isActiveWebView,
                    label: {
                        EmptyView()
                    })
                    .onReceive(model.$navigationUrl.dropFirst().removeDuplicates().filter({ $0 != nil }), perform: { _ in
                        isActiveWebView = true
                    })
                Button(action: {
                    hideKeyboard()
                    ShopLive.configure(with: model.accessKey)
                    if useToken {
                        ShopLive.authToken = model.authToken
                    }
                    else {
                        ShopLive.user = ShopLiveUser(id: model.userId, name: model.userName, gender: model.gender, age: Int(model.age) ?? -1)
                    }
                    ShopLive.play(with: model.campaignKey)
                }, label: {
                    Text("PLAY").font(.title)
                        .foregroundColor(Color("BottomButtonTitleColor"))
                        .frame(maxWidth: .infinity)
                        .frame(height: 60, alignment: /*@START_MENU_TOKEN@*/.center/*@END_MENU_TOKEN@*/)
                        .background(Color.accentColor).cornerRadius(8)
                })
            }
            .padding()
            .navigationTitle("ShopLive DEMO")
        }
    }
    
    var inputView: some View {
        Group {
            Toggle("토큰 사용", isOn: $useToken)
            VStack(alignment: .leading, spacing: 5) {
                Text("Access Key").font(.caption)
                TextField("Access Key", text: $model.accessKey)
            }
            if useToken {
                VStack(alignment: .leading, spacing: 5) {
                    Text("Auth Token").font(.caption)
                    TextField("Auth Token", text: $model.authToken)
                }
            }
            else {
                VStack(alignment: .leading, spacing: 5) {
                    Text("User Id").font(.caption)
                    TextField("User Id", text: $model.userId)
                }
                VStack(alignment: .leading, spacing: 5) {
                    Text("User Name").font(.caption)
                    TextField("User Name", text: $model.userName)
                }
                VStack(alignment: .leading, spacing: 5) {
                    Text("User Age").font(.caption)
                    TextField("User Age", text: $model.age)
                }
                VStack(alignment: .leading, spacing: 5) {
                    Text("User Gender").font(.caption)
                    Menu {
                        ForEach(ShopLiveUser.Gender.allCases, id: \.self) { gender in
                            Button(gender.description) {
                                model.gender = gender
                            }
                        }
                    } label: {
                        Text(model.gender.description).font(.body).padding(.horizontal, 10).padding(.vertical, 5).background(Color.accentColor).foregroundColor(Color("BottomButtonTitleColor")).cornerRadius(8)
                    }
                }
            }
            VStack(alignment: .leading, spacing: 5) {
                Text("Campaign Key").font(.caption)
                TextField("Campaign Key", text: $model.campaignKey)
            }
        }
    }
    
    func hideKeyboard() {
        UIApplication.shared.sendAction(#selector(UIResponder.resignFirstResponder), to:nil, from:nil, for:nil)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
