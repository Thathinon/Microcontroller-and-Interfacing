# Lab02

โฟลเดอร์สำหรับเก็บงาน Lab02

## เครื่องมือที่ใช้

งานใน Lab นี้พัฒนาด้วย **STM32CubeIDE for Visual Studio Code** (STM32 extension บน VS Code) แทน STM32CubeIDE เนื่องจาก STM32CubeIDE ในเครื่องของผมมีปัญหา จึงไม่สามารถใช้งานได้

โปรเจกต์จึงเป็นโปรเจกต์แบบ CMake (มีไฟล์ `CMakeLists.txt` และ `CMakePresets.json`) ที่สร้างจาก STM32CubeMX ผ่านไฟล์ `.ioc`
