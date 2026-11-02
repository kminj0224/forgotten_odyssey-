/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190950  Symbol: FUN_00190950 */

int FUN_00190950(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int local_24;
  int local_20;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1[7] != 0)) {
LAB_00190a44:
    iVar5 = -1;
  }
  else {
    iVar5 = 0;
    if (-1 < param_2) {
      local_20 = 0;
      local_24 = param_3;
      do {
        iVar5 = param_2;
        if (16000 < param_2) {
          iVar5 = 16000;
        }
        if (param_1[3] == 0) {
          iVar2 = FUN_0018aa58(param_1[4],local_24,iVar5);
          if (iVar2 != 0) goto LAB_00190a44;
          iVar2 = param_1[4];
        }
        else {
          if (param_1[5] == 0) {
            uVar1 = FUN_00189cd8();
            param_1[5] = uVar1;
          }
          iVar2 = FUN_0018aa58(param_1[4],local_24,iVar5);
          if (iVar2 != 0) goto LAB_00190a44;
          if ((iVar5 == param_2) && (*(uint *)(param_1[4] + 4) <= DAT_00190a60)) {
            return local_20;
          }
          iVar2 = FUN_001a39f0(param_1[3],param_1[5]);
          if ((iVar2 != -3) && (iVar2 < 0)) {
            FUN_00190594(0x608,0);
            param_1[7] = 0x608;
            goto LAB_00190a44;
          }
          iVar2 = param_1[5];
        }
        iVar2 = *(int *)(iVar2 + 4);
        param_2 = param_2 - iVar5;
        if ((iVar2 <= (int)DAT_00190a60) && (param_2 < 1)) {
          return local_20;
        }
        pcVar4 = (code *)param_1[1];
        if (pcVar4 != (code *)0x0) {
          if (param_1[3] == 0) {
            iVar3 = (*pcVar4)(*param_1,*(undefined4 *)param_1[4],iVar2);
            if (iVar3 < 0) goto LAB_00190a52;
            uVar1 = param_1[4];
          }
          else {
            iVar3 = (*pcVar4)(*param_1,*(undefined4 *)param_1[5],iVar2);
            if (iVar3 < 0) {
LAB_00190a52:
              uVar1 = DAT_00190a64;
              FUN_00190594(DAT_00190a64,0);
              param_1[7] = uVar1;
              return iVar3;
            }
            uVar1 = param_1[5];
          }
          FUN_0018a7b0(uVar1,iVar3);
          param_1[6] = param_1[6] + iVar3;
        }
        local_20 = local_20 + iVar2;
        if (param_2 < 1) {
          return local_20;
        }
        local_24 = local_24 + iVar5;
      } while( true );
    }
  }
  return iVar5;
}


