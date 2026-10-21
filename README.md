# Microcontroller and Interfacing

Repository นี้สร้างขึ้นสำหรับการส่งงานในรายวิชา Microcontroller and Interfacing

## เครื่องมือที่ใช้

งานทั้งหมดใน repository นี้พัฒนาด้วย **STM32CubeIDE for Visual Studio Code** (STM32 extension บน VS Code) แทน STM32CubeIDE เนื่องจาก STM32CubeIDE ในเครื่องของผมมีปัญหา จึงไม่สามารถใช้งานได้

โปรเจกต์แต่ละ Lab จึงเป็นโปรเจกต์แบบ CMake (มีไฟล์ `CMakeLists.txt` และ `CMakePresets.json`) ที่สร้างจาก STM32CubeMX ผ่านไฟล์ `.ioc`
