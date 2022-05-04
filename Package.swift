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
            name: "DTCardScanner",
            targets: ["DTCardScanner"]
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
            name: "DTCardScanner",
            path: "DTCardScanner.xcframework"
        ),
        .binaryTarget(
            name: "PPRiskMagnes",
            path: "PPRiskMagnes.xcframework"
        )
    ]
)
