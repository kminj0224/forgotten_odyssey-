/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a0098  Symbol: FUN_001a0098 */

void FUN_001a0098(undefined4 param_1,int param_2,undefined4 param_3,byte *param_4)

{
  undefined *puVar1;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int local_34;
  undefined auStack_28 [12];
  int local_1c;
  int iVar2;
  
  iVar7 = DAT_001a02b0 + 0x1a00a6;
  local_1c = **(int **)(iVar7 + DAT_001a02b4);
  if (param_4 != (byte *)0x0) {
    iVar4 = iVar7 + DAT_001a02b8;
    pbVar6 = param_4;
    while (uVar5 = (uint)*pbVar6, uVar5 != 0) {
      if (uVar5 == 10) {
        iVar2 = DAT_001a02bc;
        if (param_4 != pbVar6) {
          FUN_0018aa58(param_1,param_4,(int)pbVar6 - (int)param_4);
          iVar2 = DAT_001a02bc;
        }
LAB_001a00e6:
        puVar1 = (undefined *)(iVar7 + iVar2);
        uVar3 = 5;
LAB_001a0260:
        FUN_0018aa58(param_1,puVar1,uVar3);
        param_4 = pbVar6 + 1;
        pbVar6 = param_4;
      }
      else {
        if (uVar5 == 0xd) {
          iVar2 = DAT_001a02c0;
          if (param_4 != pbVar6) {
            FUN_0018aa58(param_1,param_4,(int)pbVar6 - (int)param_4);
            iVar2 = DAT_001a02c0;
          }
          goto LAB_001a00e6;
        }
        if (uVar5 == 9) {
          iVar2 = DAT_001a02c4;
          if (param_4 != pbVar6) {
            FUN_0018aa58(param_1,param_4,(int)pbVar6 - (int)param_4);
            iVar2 = DAT_001a02c4;
          }
          goto LAB_001a0142;
        }
        if (uVar5 == 0x22) {
          if (param_4 != pbVar6) {
            FUN_0018aa58(param_1,param_4,(int)pbVar6 - (int)param_4);
          }
          puVar1 = (undefined *)(iVar7 + DAT_001a02c8);
          uVar3 = 6;
          goto LAB_001a0260;
        }
        if (uVar5 == 0x3c) {
          iVar2 = DAT_001a02cc;
          if (param_4 != pbVar6) {
            FUN_0018aa58(param_1,param_4,(int)pbVar6 - (int)param_4);
            iVar2 = DAT_001a02cc;
          }
LAB_001a0142:
          puVar1 = (undefined *)(iVar7 + iVar2);
          uVar3 = 4;
          goto LAB_001a0260;
        }
        if (uVar5 == 0x3e) {
          iVar2 = DAT_001a02d0;
          if (param_4 != pbVar6) {
            FUN_0018aa58(param_1,param_4,(int)pbVar6 - (int)param_4);
            iVar2 = DAT_001a02d0;
          }
          goto LAB_001a0142;
        }
        if (uVar5 == 0x26) {
          iVar2 = DAT_001a02d4;
          if (param_4 != pbVar6) {
            FUN_0018aa58(param_1,param_4,(int)pbVar6 - (int)param_4);
            iVar2 = DAT_001a02d4;
          }
          goto LAB_001a00e6;
        }
        if (((int)(uVar5 * 0x1000000) < 0) && ((param_2 == 0 || (*(int *)(param_2 + 0x3c) == 0)))) {
          if (param_4 != pbVar6) {
            FUN_0018aa58(param_1,param_4,(int)pbVar6 - (int)param_4);
          }
          uVar5 = (uint)*pbVar6;
          if (uVar5 < 0xc0) {
            FUN_0019fa0c(0x578,param_3,0);
            if (param_2 != 0) {
              uVar3 = FUN_0019c904(iVar4);
              *(undefined4 *)(param_2 + 0x3c) = uVar3;
            }
LAB_001a024e:
            puVar1 = auStack_28;
            FUN_0019f848(puVar1,*pbVar6);
            uVar3 = 0xffffffff;
            goto LAB_001a0260;
          }
          if (0xdf < uVar5) {
            if (uVar5 < 0xf0) {
              uVar5 = (pbVar6[1] & 0x3f | (uVar5 & 0xf) << 6) << 6 | pbVar6[2] & 0x3f;
              local_34 = 3;
              goto LAB_001a0200;
            }
            if (uVar5 < 0xf8) {
              uVar5 = (pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f | (uVar5 & 7) << 6) << 6) << 6 |
                      pbVar6[3] & 0x3f;
              local_34 = 4;
              goto LAB_001a0200;
            }
LAB_001a0234:
            FUN_0019fa0c(DAT_001a02ec,param_3,0);
            if (param_2 != 0) {
              uVar3 = FUN_0019c904(iVar4);
              *(undefined4 *)(param_2 + 0x3c) = uVar3;
            }
            goto LAB_001a024e;
          }
          uVar5 = pbVar6[1] & 0x3f | (uVar5 & 0x1f) << 6;
          local_34 = 2;
LAB_001a0200:
          if (uVar5 < 0x100) {
            if (((1 < uVar5 - 9) && (uVar5 != 0xd)) && (uVar5 < 0x20)) goto LAB_001a0234;
          }
          else if (((DAT_001a02dc < uVar5 + DAT_001a02d8) && (DAT_001a02e0 < uVar5 - 0x100)) &&
                  (DAT_001a02e8 < uVar5 + DAT_001a02e4)) goto LAB_001a0234;
          FUN_0019f848(auStack_28);
          FUN_0018aa58(param_1,auStack_28,0xffffffff);
          param_4 = pbVar6 + local_34;
          pbVar6 = param_4;
        }
        else {
          pbVar6 = pbVar6 + 1;
        }
      }
    }
    if (param_4 != pbVar6) {
      FUN_0018aa58(param_1,param_4,(int)pbVar6 - (int)param_4);
    }
  }
  if (local_1c == **(int **)(iVar7 + DAT_001a02b4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


