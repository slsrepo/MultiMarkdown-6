// swift-tools-version:4.2
// Change swift-tools-version to the Swift version you want to use.
import PackageDescription

let package = Package(
    name: "libMultiMarkdown",
    products: [
        .library(name: "libMultiMarkdown", targets: ["libMultiMarkdown"]),
        .executable(name: "multimarkdown", targets: ["multimarkdown"])
    ],
    dependencies: [],
    targets: [
        .target(name: "libMultiMarkdown", dependencies: [], path: "./Sources/libMultiMarkdown"),
        .target(name: "mmd-swift", dependencies: ["libMultiMarkdown"], path: "./Sources/mmd-swift"),
        .target(name: "multimarkdown", dependencies: ["libMultiMarkdown"], path: "./Sources/multimarkdown")
    ]
)
