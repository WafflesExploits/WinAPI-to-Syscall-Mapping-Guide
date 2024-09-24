# WinAPI to Syscall Mapping Guide
This repository provides a clear and accessible reference for mapping Windows APIs to their corresponding system calls (syscalls). It aims to help developers and researchers quickly identify which syscall is invoked by a specific WinAPI, along with practical code examples.

In addition to basic mappings, the repository includes:

- Code Examples demonstrating how to use the syscalls.
- Malware Development Use Cases, highlighting scenarios where these syscalls could be leveraged.

## WinAPIs list

**ReadProcessMemory -> NtReadVirtualMemory**
**OpenProcess -> NtOpenProcess**
**DebugActiveProcess->NtDebugActiveProcess** // Same as CREATE PROCESS with DEBUG_ONLY_THIS_PROCESS 
**DebugActiveProcessStop -> NtRemoveProcessDebug** 
