// GetProcessHeapFromTeb
HANDLE GetProcessHeapFromTeb()
{
#ifdef _WIN64
   PPEB				pPeb = (PEB*)(__readgsqword(0x60));
#elif _WIN32
   PPEB				pPeb = (PEB*)(__readfsdword(0x30));
#endif
   return pPeb->ProcessHeap;
}
