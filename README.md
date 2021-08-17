# iOS SDK

## 요구사항
- Xcode 11 이상
- iOS 13 이상
- iOS Deployment Target 13.0 이상

<br>

## 설치

[CocoaPods](http://cocoapods.org/)를 사용해 `ShopLiveSDK`를 설치 할 수 있습니다.
사용하고 있는 `Podfile`에 아래 내용을 추가해 주세요.

```ruby
platform :ios, '11.0'
use_frameworks!
pod 'ShopLive'
```

<br>

`Swift Package Manager`를 사용해 ShopLiveSDK를 설치 할 수 있습니다. 아래와 같은 순서로 추가해 주세요.

- File > Swift Packages > Add Package Dependency
- Add https://github.com/shoplive/ios-sdk.git
- Select "Up to Next Major" with "1.0.2"

<br>

## Quick Guide

<br>


### 초기화

```swift
import ShopLiveSDK

ShopLive.configure(with: {ACCESS_KEY})
```

<br>

### 유저 인증

> 사용자 인증은 일반 인증과 JWT 인증 방식이 있습니다.
 
 <br>

#### 일반 인증 

> 일반 인증은 직접 사용자 정보를 입력하는 방식입니다.

<br>

```swift
import ShopLiveSDK

let user = ShopLiveUser(
    id: "{USER_ID}", 
    name: "{USER_NAME}", 
    gender: .male, 
    age: 25)

ShopLive.user = user
```

<br>

#### JWT 인증

> 비밀키를 이용하여 서버에서 JWT를 만들어 인증하는 방식입니다.\
대부분의 상황에서 권장하는 방식입니다. [[인증 토큰 생성 가이드](https://shoplive.github.io/guide/guide/authorization.html#jwt-%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%8C%E1%85%B3%E1%86%BC)]


```swift
ShopLive.authToken = "{USER_JWT}"
```

<br>

### ShopLive play

```swift
ShopLive.play(with: "{CAMPAIGN_KEY}")
```

<br>
<br>
<br>

# iOS ShopLive API Document

## configure(with:)

> AccessKey를 사용하여 SDK 를 초기화 합니다.

<br>

### Declaration
```swift
configure(with accessKey: String)
```

| Parameters |  |
| ---------- | --- |
| accesskey  | ShopLive에서 받은 AccessKey  |

<br>
<br>
<br>
<br>

## play(with:)

> CampaignKey에 해당하는 Live 영상을 사용하여 SDK 를 초기화 합니다.

<br>

### Declaration
```swift
play(with campaignKey: String?)
```

| Parameters |  |
| ---------- | --- |
| campaignKey | - Live Campaing Key <br>  - campaign key 없이 play 함수를 호출 하면 기본으로 등록된 캠페인을 play 합니다. |

<br>
<br>
<br>
<br>

## startPictureInPicture(with: , scale: )
## startPictureInPicture()

> PIP 모드 시작

<br>

### Declaration
```swift
startPictureInPicture(with position: ShopLive.PipPosition, scale: CGFloat)
startPictureInPicture()
```

| Parameters |  |
| ---------- | --- |
| position | - PIP 모드가 시작될 때 위치 <br>  - 기본값은 default 입니다. |
| scale | - 0 ~ 1 사이의 값을 입력해 주세요. <br> - PIP 화면의 scale  <br> - 장비 화면 width 기준으로 scale 된 사이즈로 PIP화면을 표시 합니다. <br> - PIP 화면의 비율은 재생되는 비디오의 화면비율로 변경됩니다. <br> - 기본값은 마지막으로 지정된 scale 값입니다. 마지막으로 지정된 scale이 없다면 default 2/5 입니다.|

<br>

```swift
public enum PipPosition: Int {
    case topLeft
    case topRight
    case bottomLeft
    case bottomRight
    case `default`
}
```

| PipPosition | 설명 |
| ----------- | --- |
| topLeft     | 화면 좌상단 |
| topRight    | 화면 우상단 |
| bottomLeft  | 화면 좌하단 |
| bottomRight | 화면 우하단 |
| default     | 마지막 position으로 PIP 모드가 시작된다. 최초로 실행 될 때는 우하단에서 시작합니다. |

<br>
<br>
<br>
<br>


## stopPictureInPicture()

> PIP 모드를 종료하고 전체화면 모드로 돌아갑니다.

<br>

### Declaration
```swift
stopPictureInPicture()
```

<br>
<br>
<br>
<br>

## pipPosition
> PIP 모드 시작시 기본 위치 지정\
> 처음 play 이후 PIP 모드 시작하면 지정된 위치에서 PIP가 시작됩니다.\
> 기본값은 default 입니다.

<br>

### Declaration
```swift
var pipPosition: ShopLive.PipPosition { get set }
```

<br>
<br>
<br>
<br>

## pipScale
> PIP 모드 시작시 기본 크기\
> 처음 play 이후 PIP 모드 시작하면 지정된 크기로 PIP가 시작됩니다.\
> 기본값은 마지막으로 지정된 scale 값입니다. 마지막으로 지정된 scale이 없다면 default 2/5 입니다.

- 0 ~ 1 사이의 값을 입력해 주세요.
- PIP 화면의 scale 
- 장비 화면 width 기준으로 scale 된 사이즈로 PIP화면을 표시 합니다.
- PIP 화면의 비율은 재생되는 비디오의 화면비율로 변경됩니다. 

<br>

### Declaration
```swift
var pipScale: CGFloat { get set }
```

<br>
<br>
<br>
<br>

## user
> 샵라이브를 사용하는 인증된 사용자\
> 사용자 인증을 하기 위해서는 사용자 정보를 입력합니다.

<br>

### Declaration
```swift
var user: ShopLiveUser? { get set }
```

```swift
public class ShopLiveUser: NSObject, Codable {
    let name: String?
    let gender: Gender?
    let id: String?
    let age: Int?
}
```

```swift
public enum Gender : Int, Codable, CaseIterable {
    case female = 1
    case male = 2
    case neutral = 3
    case unknown = 0
}
```

<br>
<br>
<br>
<br>

## authToken
> 샵라이브를 사용하는 인증된 사용자의 JWT string
> 사용자 인증을 하기 위해서는 인증된 사용자의 JWT string을 입력합니다.

<br>

### Declaration
```swift
var authToken: String? { get set }
```
<br>
<br>
<br>
<br>

## style
> 현재 ShopLive Player 의 Style

<br>

### Declaration
```swift
var style: ShopLive.PresentationStyle { get }
```

```swift
public enum PresentationStyle: Int {
    case unknown
    case fullScreen
    case pip
}
```

<br>
<br>
<br>
<br>


## delegate
> ShopLive Delegate

<br>

### Declaration
```swift
var delegate: ShopLiveSDKDelegate? { get set }
```

```swift
public protocol ShopLiveSDKDelegate: class {
    func handleNavigation(with url: URL)
    func handleDownloadCoupon(with couponId: String, completion: @escaping () -> Void)
}
```

### handleNavigation(with:)
> ShopLive 에서 상품, 배너등을 터치 했을 때 관리자에서 설정한 url을 처리하기 위한 delegate 

<br>

### handleDownloadCoupon(with: completion:)
> ShopLive 에서 쿠폰을 터치 했을 때 쿠폰을 처리하기 위한 delegate \
> couponId: 터치한 쿠폰의 ID \
> completion: 쿠폰 처리를 완료했을 때 ShopLive로 알려줄 callback 

<br>

```swift
func handleDownloadCoupon(with couponId: String, completion: () -> Void) {
    //...쿠폰 처리
    //...

    //쿠폰 처리 완료시 호출
    completion()
}
```


