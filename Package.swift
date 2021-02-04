// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "Datatrans",
    products: [
        .library(
            name: "Datatrans",
            targets: ["Datatrans"]),
    ],
	targets: [
        .binaryTarget(
            name: "Datatrans",
            path: "Datatrans.xcframework")
    ]
)
