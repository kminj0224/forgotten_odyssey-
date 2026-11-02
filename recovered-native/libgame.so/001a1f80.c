/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a1f80  Symbol: FUN_001a1f80 */

void FUN_001a1f80(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  char *__format;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  byte *local_40;
  int local_3c;
  byte local_28 [10];
  undefined local_1e;
  int local_1c;
  
  iVar9 = DAT_001a2234 + 0x1a1f8c;
  local_1c = **(int **)(iVar9 + DAT_001a2238);
  if (param_2 == (byte *)0x0) {
    local_40 = (byte *)0x0;
  }
  else {
    if (param_1 == 0) {
      bVar10 = false;
    }
    else {
      bVar10 = *(int *)(param_1 + 4) == 0xd;
    }
    pbVar2 = (byte *)(***(code ***)(iVar9 + DAT_001a223c))(1000);
    iVar1 = DAT_001a2244;
    iVar6 = DAT_001a2248;
    local_40 = pbVar2;
    if (pbVar2 == (byte *)0x0) {
LAB_001a2006:
      FUN_001a1d04(iVar9 + iVar6);
    }
    else {
      __format = (char *)(iVar9 + DAT_001a2240);
      local_3c = 1000;
      while (*param_2 != 0) {
        iVar3 = (int)pbVar2 - (int)local_40;
        if (local_3c + -99 <= iVar3) {
          local_3c = local_3c << 1;
          local_40 = (byte *)(***(code ***)(iVar9 + iVar1))(local_40,local_3c);
          iVar6 = DAT_001a224c;
          if (local_40 == (byte *)0x0) goto LAB_001a2006;
          pbVar2 = local_40 + iVar3;
        }
        bVar5 = *param_2;
        uVar7 = (uint)bVar5;
        if (uVar7 == 0x3c) {
          *pbVar2 = 0x26;
          bVar5 = 0x6c;
LAB_001a2030:
          pbVar8 = pbVar2 + 1;
          pbVar2[1] = bVar5;
          pbVar2 = pbVar2 + 2;
          bVar5 = 0x74;
LAB_001a2036:
          pbVar8[1] = bVar5;
          pbVar2[1] = 0x3b;
          pbVar2 = pbVar2 + 2;
LAB_001a2212:
          param_2 = param_2 + 1;
        }
        else {
          if (uVar7 == 0x3e) {
            *pbVar2 = 0x26;
            bVar5 = 0x67;
            goto LAB_001a2030;
          }
          if (uVar7 == 0x26) {
            *pbVar2 = bVar5;
            pbVar2[1] = 0x61;
            pbVar8 = pbVar2 + 2;
            pbVar2[2] = 0x6d;
            pbVar2 = pbVar2 + 3;
            bVar5 = 0x70;
            goto LAB_001a2036;
          }
          if (((((uVar7 - 0x20 & 0xff) < 0x60) || (uVar7 == 10)) || (uVar7 == 9)) ||
             ((bVar10 && (uVar7 == 0xd)))) {
LAB_001a208e:
            *pbVar2 = bVar5;
            pbVar2 = pbVar2 + 1;
            goto LAB_001a2212;
          }
          if (-1 < (int)(uVar7 * 0x1000000)) {
            if ((((uVar7 - 9 & 0xff) < 2) || (uVar7 == 0xd)) || (0x1f < uVar7)) {
              pbVar8 = local_28;
              snprintf((char *)pbVar8,0xb,__format);
              local_1e = 0;
              for (; *pbVar8 != 0; pbVar8 = pbVar8 + 1) {
                *pbVar2 = *pbVar8;
                pbVar2 = pbVar2 + 1;
              }
            }
            goto LAB_001a2212;
          }
          if (((param_1 != 0) && (*(int *)(param_1 + 0x3c) != 0)) || (bVar10)) goto LAB_001a208e;
          if (uVar7 < 0xc0) {
            FUN_001a1b94(DAT_001a2254,iVar9 + DAT_001a2250);
            if (param_1 != 0) {
              uVar4 = FUN_0019c904(iVar9 + DAT_001a2258);
              *(undefined4 *)(param_1 + 0x3c) = uVar4;
            }
            pbVar8 = local_28;
            snprintf((char *)pbVar8,0xb,__format,(uint)*param_2);
            local_1e = 0;
            for (; *pbVar8 != 0; pbVar8 = pbVar8 + 1) {
              *pbVar2 = *pbVar8;
              pbVar2 = pbVar2 + 1;
            }
            goto LAB_001a2212;
          }
          if (0xdf < uVar7) {
            if (uVar7 < 0xf0) {
              uVar7 = param_2[2] & 0x3f | (param_2[1] & 0x3f | (uVar7 & 0xf) << 6) << 6;
              iVar6 = 3;
              goto LAB_001a2132;
            }
            if (uVar7 < 0xf8) {
              uVar7 = param_2[3] & 0x3f |
                      (param_2[2] & 0x3f | (param_2[1] & 0x3f | (uVar7 & 7) << 6) << 6) << 6;
              iVar6 = 4;
              goto LAB_001a2132;
            }
LAB_001a2168:
            FUN_001a1b94(9,iVar9 + DAT_001a2270);
            if (param_1 != 0) {
              uVar4 = FUN_0019c904(iVar9 + DAT_001a2258);
              *(undefined4 *)(param_1 + 0x3c) = uVar4;
            }
            pbVar8 = local_28;
            snprintf((char *)pbVar8,0xb,__format,(uint)*param_2);
            local_1e = 0;
            for (; *pbVar8 != 0; pbVar8 = pbVar8 + 1) {
              *pbVar2 = *pbVar8;
              pbVar2 = pbVar2 + 1;
            }
            goto LAB_001a2212;
          }
          uVar7 = param_2[1] & 0x3f | (uVar7 & 0x1f) << 6;
          iVar6 = 2;
LAB_001a2132:
          if (uVar7 < 0x100) {
            if (((1 < uVar7 - 9) && (uVar7 != 0xd)) && (uVar7 < 0x20)) goto LAB_001a2168;
          }
          else if (((DAT_001a2260 < uVar7 + DAT_001a225c) && (DAT_001a2264 < uVar7 - 0x100)) &&
                  (DAT_001a226c < uVar7 + DAT_001a2268)) goto LAB_001a2168;
          pbVar8 = local_28;
          snprintf((char *)pbVar8,0xb,(char *)(iVar9 + DAT_001a2274));
          local_1e = 0;
          for (; *pbVar8 != 0; pbVar8 = pbVar8 + 1) {
            *pbVar2 = *pbVar8;
            pbVar2 = pbVar2 + 1;
          }
          param_2 = param_2 + iVar6;
        }
      }
      *pbVar2 = 0;
    }
  }
  if (local_1c == **(int **)(iVar9 + DAT_001a2238)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40);
}


