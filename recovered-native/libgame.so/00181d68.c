/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00181d68  Symbol: FUN_00181d68 */

void FUN_00181d68(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  do {
    while( true ) {
      pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
      cVar1 = *pcVar2;
      if ((cVar1 == '<') &&
         ((pcVar2[1] == '?' || (((pcVar2[1] == '!' && (pcVar2[2] == '-')) && (pcVar2[3] == '-'))))))
      break;
      if (((byte)(cVar1 - 9U) < 2) || (cVar1 == ' ')) {
        if (cVar1 == '<') break;
      }
      else if (cVar1 != '\r') {
        return;
      }
LAB_00181d80:
      if ((((byte)(cVar1 - 9U) < 2) || (cVar1 == ' ')) || (cVar1 == '\r')) {
        FUN_0017a4a4(param_1);
      }
      else {
        FUN_0017e97c(param_1);
      }
    }
    if (pcVar2[1] != '?') goto LAB_00181d80;
    FUN_00181988(param_1);
  } while( true );
}


