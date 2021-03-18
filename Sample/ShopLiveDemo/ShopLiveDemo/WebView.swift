//
//  WebView.swift
//  ShopLiveDemo
//
//  Created by purpleworks on 2021/03/17.
//

import SwiftUI
import WebKit

struct WebView: UIViewRepresentable {
    typealias UIViewType = WKWebView
    
    let url: URL?
    
    func makeUIView(context: Context) -> WKWebView {
        let webView = WKWebView()
        if let url = self.url {
            webView.load(URLRequest(url: url))
        }
        return webView
    }
    
    func updateUIView(_ uiView: WKWebView, context: Context) {
        guard let url = self.url else { return }
        uiView.load(URLRequest(url: url))
    }
    
    
}

struct WebView_Previews: PreviewProvider {
    static var previews: some View {
        WebView(url: URL(string: "https://www.google.com")!)
    }
}
