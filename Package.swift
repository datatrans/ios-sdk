// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "Datatrans",
    products: [
        .library(
            name: "Datatrans",
            targets: ["Datatrans"]
        ),
        .library(
            name: "PPRiskMagnes",
            targets: ["PPRiskMagnes"]
        ),
        .library(
            name: "ThreeDS_SDK",
            targets: ["ThreeDS_SDK"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "Datatrans",
            path: "Datatrans.xcframework"
        ),
        .binaryTarget(
            name: "PPRiskMagnes",
            path: "PPRiskMagnes.xcframework"
        ),
        .binaryTarget(
            name: "ThreeDS_SDK",
            url: "https://nexus.extranet.netcetera.biz/nexus/repository/public-repository-maven/com/netcetera/nca-341-2/3ds-sdk/ios/release/2.6.01/ThreeDS_SDK.zip",
            checksum: "90284f80dbad0258687d39a724d967f53d47db99cf4bfc3faaeee1fbe9671e2a"
        )
    ]
)
