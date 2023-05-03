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
            name: "KlarnaMobileSDK",
            targets: ["DTKlarna", "KlarnaMobileSDK"]
        ),
        .library(
            name: "PPRiskMagnes",
            targets: ["PPRiskMagnes"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "Datatrans",
            path: "Datatrans.xcframework"
        ),
        .binaryTarget(
            name: "DTKlarna",
            path: "DTKlarna.xcframework"
        ),
        .binaryTarget(
            name: "KlarnaMobileSDK",
            path: "KlarnaMobileSDK.xcframework"
        ),
        .binaryTarget(
            name: "PPRiskMagnes",
            path: "PPRiskMagnes.xcframework"
        )
    ]
)
