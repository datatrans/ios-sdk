// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "Datatrans",
    platforms: [.iOS(.v15)],
    products: [
        .library(
            name: "Datatrans",
            targets: ["Datatrans"]
        ),
        .library(
            name: "PPRiskMagnes",
            targets: ["DatatransPayPalRisk"]
        ),
        .library(
            name: "ThreeDS_SDK",
            targets: ["ThreeDS_SDK"]
        ),
        .library(
            name: "KlarnaPayments",
            targets: ["KlarnaCore", "KlarnaCoreWebView", "KlarnaPayments"]
        )
    ],
    dependencies: [
        .package(url: "https://github.com/paypal/paypal-risk-ios.git", from: "5.6.0")
    ],
    targets: [
        .binaryTarget(
            name: "Datatrans",
            path: "Datatrans.xcframework"
        ),
        .target(
            name: "DatatransPayPalRisk",
            dependencies: [.product(name: "PayPalRisk", package: "paypal-risk-ios")]
        ),
        .binaryTarget(
            name: "ThreeDS_SDK",
            url: "https://nexus.extranet.netcetera.biz/nexus/repository/public-repository-maven/com/netcetera/nca-341-2/3ds-sdk/ios/release/2.7.01/ThreeDS_SDK.zip",
            checksum: "3799efeba47f09a4670046830240ac4fcc31453ef68e0bcc821e37e650b0e3ac"
        ),
        .binaryTarget(
            name: "KlarnaCore",
            url: "https://x.klarnacdn.net/mobile-sdk/ios/frameworks/KlarnaCore/2.16.0/KlarnaCore.xcframework.zip",
            checksum: "7e0cc63daca997e9877ae17fc446baa55ce5fe8b373c137ecd9248a73c7f817b"
        ),
        .binaryTarget(
            name: "KlarnaCoreWebView",
            url: "https://x.klarnacdn.net/mobile-sdk/ios/frameworks/KlarnaCoreWebView/2.16.0/KlarnaCoreWebView.xcframework.zip",
            checksum: "cf4da53a6269d914c5ba24a218d4844a5f3c31ba41070a632f774040e2d1730f"
        ),
        .binaryTarget(
            name: "KlarnaPayments",
            url: "https://x.klarnacdn.net/mobile-sdk/ios/frameworks/KlarnaPayments/2.16.0/KlarnaPayments.xcframework.zip",
            checksum: "c45f26286d9a13f0473257453939ba86c6bc528346e65ad2bba7fae001df212f"
        )
    ]
)
