/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001966d4  Symbol: FUN_001966d4 */

void FUN_001966d4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char local_80 [100];
  int local_1c;
  
  iVar4 = DAT_00196794 + 0x1966e0;
  local_1c = **(int **)(iVar4 + DAT_00196798);
  cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 0x24) + 0x10) + 1);
  if (((((byte)(cVar1 + 0x9fU) < 0x1a) || ((byte)(cVar1 + 0xbfU) < 0x1a)) || (cVar1 == '_')) ||
     (cVar1 == ':')) {
    iVar3 = 0;
    do {
      cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 0x24) + 0x10) + iVar3 + 1);
      bVar5 = 0x19 < (byte)(cVar1 + 0xbfU);
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        if (bVar5) goto LAB_0019671a;
LAB_00196712:
        local_80[iVar3] = cVar1 + ' ';
      }
      else {
        if (!bVar5) goto LAB_00196712;
        if (((9 < (byte)(cVar1 - 0x30U)) && (cVar1 != ':')) && ((cVar1 != '-' && (cVar1 != '_'))))
        break;
LAB_0019671a:
        local_80[iVar3] = cVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 100);
    uVar2 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),local_80);
  }
  else {
    uVar2 = 0;
  }
  if (local_1c == **(int **)(iVar4 + DAT_00196798)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


