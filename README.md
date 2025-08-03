# Kawaii Physics for Satisfactory Mod Loader
[![UE Version](https://img.shields.io/badge/Unreal%20Engine-5.3.2--CSS-0e1128?logo=unrealengine&logoColor=white)](https://github.com/satisfactorymodding/UnrealEngine)
[![Downloads](https://img.shields.io/github/downloads/Dytser/SML_KawaiiPhysics/total)](https://github.com/Dytser/SML_KawaiiPhysics/releases)
[![Issues](https://img.shields.io/github/issues/Dytser/SML_KawaiiPhysics?logo=github)](https://github.com/Dytser/SML_KawaiiPhysics/issues)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
![Static Badge](https://img.shields.io/badge/SMR-Mod%20Page-orange?style=flat&logo=modrinth)



![Kawaii](https://iili.io/FSQE1qv.png)


Kawaii Physics is a plugin for Unreal engine that was brought into SML to be able to load as a dependency for mods that may want to use a more robust physics plugin than what unreal usually allows without the need to set up complex and frustrating physics assets to achieve them.

A lot of modern games have started using this plugin with notable examples being 
* Princess peach Showtime
* Stellar blade
* Visions of Mana
* Wuthering Waves
* Lies of P
[And many more](https://github.com/pafuhana1213/KawaiiPhysics/wiki/%E6%8E%A1%E7%94%A8%E5%AE%9F%E7%B8%BE-Adoption)


**Kawaii Physics** works as a simple pseudo-physics plugin for Unreal Engine.  
It allows you to easily and cutely animate things that sway, such as hair, skirts, and breasts.

<a href="https://youtu.be/0f-l-SP07Mo">
  <img src="https://github.com/user-attachments/assets/0bc33f5c-c7db-49b3-8e98-75dc062a4e2a" alt="Demo Video" width="640px">
</a>

[Demo Video](https://youtu.be/0f-l-SP07Mo)


## ✨ Features

<table>
  <tr>
    <td><img src="https://github.com/pafuhana1213/Screenshot/blob/master/KawaiiPhysics2.jpg?raw=true" width="320"></td>
    <td><img src="https://github.com/pafuhana1213/Screenshot/blob/master/KawaiiPhysics4.gif?raw=true" width="320"></td>
  </tr>
</table>

- Physics control based on animation and character movement
- Easy setup with a single `KawaiiPhysics` node in the AnimGraph
- Supports sphere, capsule, and plane collisions, which can be intuitively adjusted in the viewport
- Stability that prevents the skeleton from stretching or shrinking even if calculations fail
- Lightweight algorithm that does not depend on PhysX
- External forces such as wind and gravity can be applied for artistic purposes
- Parameters can be saved and shared using `DataAsset` and `PhysicsAsset`

## 🚀 Getting Started
---
### Ensure you have a Satisfactory Modding Environment set up
If you have not already read through and gotten your modding environment set up then follow the [**Getting Started on Ficsit Docs**](https://docs.ficsit.app/satisfactory-modding/latest/Development/BeginnersGuide/index.html) to set up your environment and return to this once you have gotten it to work and can effectively Alpakit a mod.

This Git page will not go into any explanations on how to set up this environment. Come here once you have yours ready and functional.

## Installing Kawaii Physics for SML

For simplicity, ill refer to the Modding Environment as SML_UE from now on as it would be a shortened name from "SatisfactoryModLoader" as the project folder from the guide would be called if not renamed.
### Downloading
#### Method 1: Using Git Clone

1. Ensure you have [Git Installed](https://github.com/git-guides/install-git)
2. Navigate to your SML_UE folder
3. Go to your "Mods" folder
4. Hold Shift+Right click an empty space in the folder.
5. Choose "Open Powershell Window here"
6. Type ``Git Clone https://github.com/Dytser/SML_KawaiiPhysics`` 
7. Close the powershell window once its done, You can rename the folder if you wish.

##### Method 2: Manually downloading

1. At the top of this page press the green "code
2. " button
3. Download ZIP
4. Navigate to your SML_UE folder
5. Go into your Mods folder
6. Extract the contents of the Zip into the mods folder.
7. Double check to ensure you dont have 2 folders named the same thing (if you open the zip and extract it, this wont be an issue)

### 2. Starting your Unreal Engine environment for the first time with the mod installed.

If you start your unreal engine project for the first time and get any questions about recompiling plugins etc then just accept them and let unreal do its thing. Once done you wont get this in the future.

### 3. Confirm the plugin is installed

Now that the plugin has been installed in your environment it should be immedietly able to be used in your own mod projects.

However you can still confirm it being installed prior to starting to use it in your own projects.
1. Press "Edit"
2. Plugins
3. Search for Kawaii Physics
4. Turn it on if it is not already


### 4. How to Use

- Add and use the `KawaiiPhysics` node in the AnimGraph of the Animation Blueprint.
- For detailed parameter settings, please refer to the Wiki.
  - **[About Each Parameter](https://github.com/pafuhana1213/KawaiiPhysics/wiki/%E5%90%84%E3%83%91%E3%83%A9%E3%83%A1%E3%83%BC%E3%82%BF%E3%81%AB%E3%81%A4%E3%81%84%E3%81%A6--About-each-parameters)**
 
### 5. Packaging your mod
In Alpakit edit your mod and add the mod dependency.
Name: ``KawaiiPhysics``
Version: ``Whichever version you are using or higher``

*You can technically make the plugin an optional thing, your mod should simply lose any physics you have added if people dont install Kawaii Physics alongside yours.*

Then just Alpakit your mod and go testing!

---
## 🖼️ Gallery

<img src="https://github.com/user-attachments/assets/fda69859-b60f-4fde-a683-62da3e2839e4" alt="compare" width="640px">

*Character: [Gray-chan](http://rarihoma.xvs.jp/products/graychan)*

<img src="https://github.com/user-attachments/assets/28d72d0c-4423-41c7-bc52-c5c7c3886e02" alt="dance5" width="640px">

*Character: [Original 3D Model "Lzebul"](https://booth.pm/ja/items/4887691) / Motion: [Mirai Komachi](https://www.miraikomachi.com/download/)*

<img src="https://github.com/user-attachments/assets/63faed3c-8aaa-4d4d-ae33-e98f9c8c15fd" alt="danceKano" width="640px">

*Character: [TA-style Kano Saginomiya](https://uzurig.com/ja/uzurig2-rigging-plugin-for-maya-jp/) / Motion: [Shikanokonokonokoshitantan](https://booth.pm/ja/items/5975857) / Setup: [TA Co., Ltd.](https://xta.co.jp/)*

## 📚 Documentation & Community

- **[DeepWiki](https://deepwiki.com/pafuhana1213/KawaiiPhysics)**: AI-generated documentation
- **[Discussions](https://github.com/pafuhana1213/KawaiiPhysics/discussions)**: For questions, requests, and general chat
- **[Issues](https://github.com/pafuhana1213/KawaiiPhysics/issues)**: Bug reports

## 🎓 Tutorials & Articles

### Official

- [Internal Implementation Explanation of the Self-Made AnimNode "Kawaii Physics" Part 1](http://pafuhana1213.hatenablog.com/entry/2019/07/26/171046)
- [Test of using #ControlRig to prevent skirt penetration in conjunction with #KawaiiPhysics](https://twitter.com/pafuhana1213/status/1300454762542817280)

### Unofficial (Thank you!)

- [How To Setup Kawaii Physics in Unreal Engine 5](https://dev.epicgames.com/community/learning/tutorials/d1Z9/unreal-engine-how-to-setup-kawaii-physics-in-unreal)

- [The Hidden Physics “Engine” Behind Unreal's Most Stylish Games ...](https://www.youtube.com/watch?v=9ThmoMHnHhw)
- In Japanese
  - [A Complete Beginner's Guide to Increasing a Female Character's Kawaii with KawaiiPhysics](https://qiita.com/YuukiOgino/items/7f3198a90dab43019f26)
  - [Swaying Objects and Control Rig: A Case Study in Virtual Live Using UE](https://www.docswell.com/s/indieusgames/K4Q2XJ-2024-06-14-175045)
  - [【UE】Swaying Object Settings (Kawaii Physics)](https://techblog.sumelagi.co.jp/unrealengine/147/)
  - [【UE4】Kawaii Physics Tutorial #1](https://www.youtube.com/watch?v=hlgXuVML_is)
  - [Learn Kawaii Physics in 5 minutes!【UE5】【tutorial】](https://www.youtube.com/watch?v=TliP9vSxm4c)


## 🌟 Showcase

It has been adopted in many projects!
- **[Showcase List](https://github.com/pafuhana1213/KawaiiPhysics/wiki/Adoption-Record)**
- Please share your work with us [here](https://github.com/pafuhana1213/KawaiiPhysics/discussions/65)!
- When sharing your work on Twitter/X, please use the hashtag **[#KawaiiPhysics](https://twitter.com/search?q=%23kawaiiphysics&src=typed_query&f=live)**!

## 📜 License

[MIT License](https://github.com/pafuhana1213/KawaiiPhysics/blob/master/LICENSE)

## 👨‍💻 Author

[Okazu @pafuhana1213](https://twitter.com/pafuhana1213)

## 📅 Changelog

[Announcements](https://github.com/pafuhana1213/KawaiiPhysics/discussions/categories/announcements-%E3%82%A2%E3%83%8A%E3%82%A6%E3%83%B3%E3%82%B9)

---

## ✨ Support Me If You’d Like!

If this plugin has been even a little helpful for your UE projects, I’m truly glad to hear that!

I’ve been developing it solo as both a hobby and a practical tool — squeezing out development time and even covering coffee costs out of my own pocket ☕  
If you think “Hey, this is pretty good!”, your support via a purchase on FAB or through GitHub Sponsors would mean a lot to me and help keep development going.  
(You can read more about the background behind the FAB launch [here](https://github.com/pafuhana1213/KawaiiPhysics/discussions/170).)

[💖 **Buy on FAB**](https://www.fab.com/ja/listings/f870c07e-0a02-4a78-a888-e52a22794572)  
[💖 **Support via GitHub Sponsors**](https://github.com/sponsors/pafuhana1213)
