# Projects and dependencies analysis

This document provides a comprehensive overview of the projects and their dependencies in the context of upgrading to .NETCoreApp,Version=v10.0.

## Table of Contents

- [Executive Summary](#executive-Summary)
  - [Highlevel Metrics](#highlevel-metrics)
  - [Projects Compatibility](#projects-compatibility)
  - [Package Compatibility](#package-compatibility)
  - [API Compatibility](#api-compatibility)
- [Aggregate NuGet packages details](#aggregate-nuget-packages-details)
- [Top API Migration Challenges](#top-api-migration-challenges)
  - [Technologies and Features](#technologies-and-features)
  - [Most Frequent API Issues](#most-frequent-api-issues)
- [Projects Relationship Graph](#projects-relationship-graph)
- [Project Details](#project-details)

  - [Examples\Examples.csproj](#examplesexamplescsproj)
  - [Npgquery.Tests\Npgquery.Tests.csproj](#npgquerytestsnpgquerytestscsproj)
  - [Npgquery\Npgquery.csproj](#npgquerynpgquerycsproj)


## Executive Summary

### Highlevel Metrics

| Metric | Count | Status |
| :--- | :---: | :--- |
| Total Projects | 3 | All require upgrade |
| Total NuGet Packages | 8 | 1 need upgrade |
| Total Code Files | 13 |  |
| Total Code Files with Incidents | 3 |  |
| Total Lines of Code | 4605 |  |
| Total Number of Issues | 5 |  |
| Estimated LOC to modify | 0+ | at least 0.0% of codebase |

### Projects Compatibility

| Project | Target Framework | Difficulty | Package Issues | API Issues | Est. LOC Impact | Description |
| :--- | :---: | :---: | :---: | :---: | :---: | :--- |
| [Examples\Examples.csproj](#examplesexamplescsproj) | net9.0;net8.0;netstandard2.1 | 🟢 Low | 0 | 0 |  | DotNetCoreApp, Sdk Style = True |
| [Npgquery.Tests\Npgquery.Tests.csproj](#npgquerytestsnpgquerytestscsproj) | net9.0;net8.0 | 🟢 Low | 1 | 0 |  | DotNetCoreApp, Sdk Style = True |
| [Npgquery\Npgquery.csproj](#npgquerynpgquerycsproj) | net9.0;net8.0;netstandard2.1 | 🟢 Low | 1 | 0 |  | ClassLibrary, Sdk Style = True |

### Package Compatibility

| Status | Count | Percentage |
| :--- | :---: | :---: |
| ✅ Compatible | 7 | 87.5% |
| ⚠️ Incompatible | 1 | 12.5% |
| 🔄 Upgrade Recommended | 0 | 0.0% |
| ***Total NuGet Packages*** | ***8*** | ***100%*** |

### API Compatibility

| Category | Count | Impact |
| :--- | :---: | :--- |
| 🔴 Binary Incompatible | 0 | High - Require code changes |
| 🟡 Source Incompatible | 0 | Medium - Needs re-compilation and potential conflicting API error fixing |
| 🔵 Behavioral change | 0 | Low - Behavioral changes that may require testing at runtime |
| ✅ Compatible | 0 |  |
| ***Total APIs Analyzed*** | ***0*** |  |

## Aggregate NuGet packages details

| Package | Current Version | Suggested Version | Projects | Description |
| :--- | :---: | :---: | :--- | :--- |
| coverlet.collector | 6.0.4 |  | [Npgquery.Tests.csproj](#npgquerytestsnpgquerytestscsproj) | ✅Compatible |
| Google.Protobuf | 3.33.0 |  | [Npgquery.csproj](#npgquerynpgquerycsproj) | ✅Compatible |
| Grpc.Tools | 2.72.0 |  | [Npgquery.csproj](#npgquerynpgquerycsproj) | ✅Compatible |
| Microsoft.NET.Test.Sdk | 18.0.0 |  | [Npgquery.Tests.csproj](#npgquerytestsnpgquerytestscsproj) | ✅Compatible |
| Microsoft.SourceLink.GitHub | 8.0.0 |  | [Npgquery.csproj](#npgquerynpgquerycsproj) | ✅Compatible |
| System.Memory | 4.6.3 |  | [Npgquery.csproj](#npgquerynpgquerycsproj) | NuGet package functionality is included with framework reference |
| xunit | 2.9.3 |  | [Npgquery.Tests.csproj](#npgquerytestsnpgquerytestscsproj) | ⚠️NuGet package is deprecated |
| xunit.runner.visualstudio | 3.1.5 |  | [Npgquery.Tests.csproj](#npgquerytestsnpgquerytestscsproj) | ✅Compatible |

## Top API Migration Challenges

### Technologies and Features

| Technology | Issues | Percentage | Migration Path |
| :--- | :---: | :---: | :--- |

### Most Frequent API Issues

| API | Count | Percentage | Category |
| :--- | :---: | :---: | :--- |

## Projects Relationship Graph

Legend:
📦 SDK-style project
⚙️ Classic project

```mermaid
flowchart LR
    P1["<b>📦&nbsp;Npgquery.csproj</b><br/><small>net9.0;net8.0;netstandard2.1</small>"]
    P2["<b>📦&nbsp;Npgquery.Tests.csproj</b><br/><small>net9.0;net8.0</small>"]
    P3["<b>📦&nbsp;Examples.csproj</b><br/><small>net9.0;net8.0;netstandard2.1</small>"]
    P2 --> P1
    P3 --> P1
    click P1 "#npgquerynpgquerycsproj"
    click P2 "#npgquerytestsnpgquerytestscsproj"
    click P3 "#examplesexamplescsproj"

```

## Project Details

<a id="examplesexamplescsproj"></a>
### Examples\Examples.csproj

#### Project Info

- **Current Target Framework:** net9.0;net8.0;netstandard2.1
- **Proposed Target Framework:** net9.0;net8.0;netstandard2.1;net10.0
- **SDK-style**: True
- **Project Kind:** DotNetCoreApp
- **Dependencies**: 1
- **Dependants**: 0
- **Number of Files**: 1
- **Number of Files with Incidents**: 1
- **Lines of Code**: 720
- **Estimated LOC to modify**: 0+ (at least 0.0% of the project)

#### Dependency Graph

Legend:
📦 SDK-style project
⚙️ Classic project

```mermaid
flowchart TB
    subgraph current["Examples.csproj"]
        MAIN["<b>📦&nbsp;Examples.csproj</b><br/><small>net9.0;net8.0;netstandard2.1</small>"]
        click MAIN "#examplesexamplescsproj"
    end
    subgraph downstream["Dependencies (1"]
        P1["<b>📦&nbsp;Npgquery.csproj</b><br/><small>net9.0;net8.0;netstandard2.1</small>"]
        click P1 "#npgquerynpgquerycsproj"
    end
    MAIN --> P1

```

### API Compatibility

| Category | Count | Impact |
| :--- | :---: | :--- |
| 🔴 Binary Incompatible | 0 | High - Require code changes |
| 🟡 Source Incompatible | 0 | Medium - Needs re-compilation and potential conflicting API error fixing |
| 🔵 Behavioral change | 0 | Low - Behavioral changes that may require testing at runtime |
| ✅ Compatible | 0 |  |
| ***Total APIs Analyzed*** | ***0*** |  |

<a id="npgquerytestsnpgquerytestscsproj"></a>
### Npgquery.Tests\Npgquery.Tests.csproj

#### Project Info

- **Current Target Framework:** net9.0;net8.0
- **Proposed Target Framework:** net9.0;net8.0;net10.0
- **SDK-style**: True
- **Project Kind:** DotNetCoreApp
- **Dependencies**: 1
- **Dependants**: 0
- **Number of Files**: 6
- **Number of Files with Incidents**: 1
- **Lines of Code**: 1956
- **Estimated LOC to modify**: 0+ (at least 0.0% of the project)

#### Dependency Graph

Legend:
📦 SDK-style project
⚙️ Classic project

```mermaid
flowchart TB
    subgraph current["Npgquery.Tests.csproj"]
        MAIN["<b>📦&nbsp;Npgquery.Tests.csproj</b><br/><small>net9.0;net8.0</small>"]
        click MAIN "#npgquerytestsnpgquerytestscsproj"
    end
    subgraph downstream["Dependencies (1"]
        P1["<b>📦&nbsp;Npgquery.csproj</b><br/><small>net9.0;net8.0;netstandard2.1</small>"]
        click P1 "#npgquerynpgquerycsproj"
    end
    MAIN --> P1

```

### API Compatibility

| Category | Count | Impact |
| :--- | :---: | :--- |
| 🔴 Binary Incompatible | 0 | High - Require code changes |
| 🟡 Source Incompatible | 0 | Medium - Needs re-compilation and potential conflicting API error fixing |
| 🔵 Behavioral change | 0 | Low - Behavioral changes that may require testing at runtime |
| ✅ Compatible | 0 |  |
| ***Total APIs Analyzed*** | ***0*** |  |

<a id="npgquerynpgquerycsproj"></a>
### Npgquery\Npgquery.csproj

#### Project Info

- **Current Target Framework:** net9.0;net8.0;netstandard2.1
- **Proposed Target Framework:** net9.0;net8.0;netstandard2.1;net10.0
- **SDK-style**: True
- **Project Kind:** ClassLibrary
- **Dependencies**: 0
- **Dependants**: 2
- **Number of Files**: 8
- **Number of Files with Incidents**: 1
- **Lines of Code**: 1929
- **Estimated LOC to modify**: 0+ (at least 0.0% of the project)

#### Dependency Graph

Legend:
📦 SDK-style project
⚙️ Classic project

```mermaid
flowchart TB
    subgraph upstream["Dependants (2)"]
        P2["<b>📦&nbsp;Npgquery.Tests.csproj</b><br/><small>net9.0;net8.0</small>"]
        P3["<b>📦&nbsp;Examples.csproj</b><br/><small>net9.0;net8.0;netstandard2.1</small>"]
        click P2 "#npgquerytestsnpgquerytestscsproj"
        click P3 "#examplesexamplescsproj"
    end
    subgraph current["Npgquery.csproj"]
        MAIN["<b>📦&nbsp;Npgquery.csproj</b><br/><small>net9.0;net8.0;netstandard2.1</small>"]
        click MAIN "#npgquerynpgquerycsproj"
    end
    P2 --> MAIN
    P3 --> MAIN

```

### API Compatibility

| Category | Count | Impact |
| :--- | :---: | :--- |
| 🔴 Binary Incompatible | 0 | High - Require code changes |
| 🟡 Source Incompatible | 0 | Medium - Needs re-compilation and potential conflicting API error fixing |
| 🔵 Behavioral change | 0 | Low - Behavioral changes that may require testing at runtime |
| ✅ Compatible | 0 |  |
| ***Total APIs Analyzed*** | ***0*** |  |

