/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017a970  Symbol: FUN_0017a970 */

void FUN_0017a970(int param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char acStack_b4 [152];
  int local_1c;
  
  iVar6 = DAT_0017aaf4 + 0x17a97c;
  local_1c = **(int **)(iVar6 + DAT_0017aaf8);
  if ((param_3 == (undefined4 *)0x0) || (param_2 == (byte *)0x0)) {
LAB_0017aaa2:
    uVar2 = 0;
  }
  else {
    if (((param_1 == 0) || (*(int *)(param_1 + 0x100) == 1)) &&
       (uVar4 = (uint)*param_2, (int)(uVar4 * 0x1000000) < 0)) {
      if ((param_2[1] & 0xc0) == 0x80) {
        if ((uVar4 & 0xe0) == 0xe0) {
          if ((param_2[2] & 0xc0) != 0x80) goto LAB_0017aa8a;
          if ((uVar4 & 0xf0) == 0xf0) {
            if (((uVar4 & 0xf8) != 0xf0) || ((param_2[3] & 0xc0) != 0x80)) goto LAB_0017aa8a;
            *param_3 = 4;
            uVar2 = param_2[3] & 0x3f | (*param_2 & 7) << 0x12 | (param_2[1] & 0x3f) << 0xc;
            bVar1 = param_2[2];
          }
          else {
            *param_3 = 3;
            bVar1 = param_2[1];
            uVar2 = (uint)*param_2 << 0xc & DAT_0017aafc | param_2[2] & 0x3f;
          }
          uVar4 = bVar1 & 0x3f;
        }
        else {
          *param_3 = 2;
          uVar4 = *param_2 & 0x1f;
          uVar2 = param_2[1] & 0x3f;
        }
        uVar2 = uVar2 | uVar4 << 6;
        if (uVar2 < 0x100) {
          if ((uVar2 - 9 < 2) || (uVar2 == 0xd)) {
            bVar7 = false;
          }
          else {
            bVar7 = uVar2 < 0x20;
          }
        }
        else if ((DAT_0017ab04 < uVar2 + DAT_0017ab00) && (DAT_0017ab08 < uVar2 - 0x100)) {
          bVar7 = DAT_0017ab10 < uVar2 + DAT_0017ab0c;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          FUN_0017a43c(param_1,iVar6 + DAT_0017ab14,uVar2);
        }
        goto LAB_0017aade;
      }
LAB_0017aa8a:
      if (((param_1 == 0) || (iVar5 = *(int *)(param_1 + 0x24), iVar5 == 0)) ||
         (pbVar3 = *(byte **)(iVar5 + 0x10), *(int *)(iVar5 + 0x14) - (int)pbVar3 < 4)) {
        *param_3 = 0;
        goto LAB_0017aaa2;
      }
      snprintf(acStack_b4,0x95,(char *)(iVar6 + DAT_0017ab18),(uint)*pbVar3,(uint)pbVar3[1],
               (uint)pbVar3[2],(uint)pbVar3[3]);
      FUN_001793c8(param_1,9,iVar6 + DAT_0017ab1c,acStack_b4,0);
    }
    *param_3 = 1;
    uVar2 = (uint)*param_2;
  }
LAB_0017aade:
  if (local_1c == **(int **)(iVar6 + DAT_0017aaf8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


