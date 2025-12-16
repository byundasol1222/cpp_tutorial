# C++ Tutorial

이 저장소는 **C++ 기초 학습**, **문법 실습**, 그리고 **Visual Studio 기반 개발 환경 구축**을 목적으로 구성된 프로젝트입니다. 

---

## 1. Environment

| 항목           | 설정                 |
| ------------ | ------------------ |
| **OS**       | Windows 10/11      |
| **Editor**   | Visual Studio 2026 |
| **Language** | C++                |
| **VCS**      | Git + GitHub       |

---

## 2. Project Structure

Visual Studio는 솔루션(.sln)과 프로젝트(.vcxproj) 단위로 구성됩니다. 기본 구조는 아래와 같습니다.

```
cpp_tutorial/
├─ cpp_tutorial.sln
├─ cpp_tutorial/
│  ├─ cpp_tutorial.vcxproj
│  ├─ main.cpp
│  ├─ circle.h
│  ├─ circle.cpp
│  └─ (추가 실습 파일들)
├─ .gitattributes
├─ .gitignore
└─ README.md
```

필요에 따라 다음과 같이 학습 영역별로 **디렉토리**를 확장할 수 있습니다:

```
cpp_tutorial/
├─ cpp_tutorial.sln
├─ cpp_tutorial/
│  ├─ examples/
│  │  ├─ example_reference.cpp
│  │  └─ example_pointer.cpp
│  ├─ cpp_tutorial.vcxproj
│  ├─ main.cpp
│  ├─ runner.h
│  ├─ runner.cpp
│  ├─ circle.h
│  └─ circle.cpp
├─ .gitattributes
├─ .gitignore
└─ README.md
```

필요에 따라 다음과 같이 학습 영역별로 **프로젝트**를 확장할 수 있습니다:

```
cpp_tutorial/
├─ cpp_tutorial.sln
├─ 01_basics/
│  ├─ basics.vcxproj
│  └─ main.cpp
├─ 02_oop/
│  ├─ oop.vcxproj
│  └─ main.cpp
├─ 03_pointer/
│  ├─ pointer.vcxproj
│  └─ main.cpp
├─ 04_memory/
│  ├─ memory.vcxproj
│  └─ main.cpp
└─ etc...
```

---

## 3. How to Build & Run (Visual Studio)

### **Build**

메뉴 → **빌드** → **솔루션 빌드**

### **Run**

**Ctrl + F5** 또는 메뉴 → **디버그 → 디버그하지 않고 시작**

---
