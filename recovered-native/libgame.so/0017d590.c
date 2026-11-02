/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017d590  Symbol: FUN_0017d590 */

void FUN_0017d590(undefined4 param_1,byte *param_2,void **param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *__dest;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  byte *local_a8;
  int local_a4;
  undefined auStack_8c [4];
  byte local_88 [108];
  int local_1c;
  
  iVar6 = DAT_0017d808 + 0x17d59e;
  local_1c = **(int **)(iVar6 + DAT_0017d80c);
  if ((param_3 == (void **)0x0) || (*param_3 = (void *)0x0, param_2 == (byte *)0x0)) {
LAB_0017d7e6:
    __dest = (void *)0x0;
  }
  else {
    bVar8 = *param_2;
    if (bVar8 != 0x3a) {
      sVar5 = 0;
      local_a8 = param_2 + 1;
      while ((bVar8 != 0x3a && (bVar8 != 0))) {
        if (sVar5 == 100) goto LAB_0017d5f2;
        local_88[sVar5] = bVar8;
        sVar5 = sVar5 + 1;
        bVar8 = *local_a8;
        local_a8 = local_a8 + 1;
      }
      if (99 < (int)sVar5) {
LAB_0017d5f2:
        local_a4 = sVar5 * 2;
        __dest = (void *)(***(code ***)(iVar6 + DAT_0017d810))(local_a4);
        if (__dest != (void *)0x0) {
          memcpy(__dest,local_88,sVar5);
          iVar3 = DAT_0017d814;
          while ((bVar8 != 0x3a && (bVar8 != 0))) {
            pvVar4 = __dest;
            if (local_a4 <= (int)(sVar5 + 9)) {
              local_a4 = local_a4 << 1;
              pvVar4 = (void *)(***(code ***)(iVar6 + iVar3))(__dest,local_a4);
              if (pvVar4 == (void *)0x0) {
                (***(code ***)(iVar6 + DAT_0017d818))(__dest);
                goto LAB_0017d63c;
              }
            }
            *(byte *)((int)pvVar4 + sVar5) = bVar8;
            sVar5 = sVar5 + 1;
            bVar8 = *local_a8;
            __dest = pvVar4;
            local_a8 = local_a8 + 1;
          }
          *(undefined *)((int)__dest + sVar5) = 0;
          goto LAB_0017d660;
        }
LAB_0017d63c:
        FUN_00179430(param_1,0);
        goto LAB_0017d7e6;
      }
      local_a4 = 100;
      __dest = (void *)0x0;
LAB_0017d660:
      if ((bVar8 != 0x3a) || (*local_a8 != 0)) {
        if (__dest == (void *)0x0) {
          __dest = (void *)FUN_0019c88c(local_88,sVar5);
        }
        else {
          local_a4 = 100;
        }
        if (bVar8 != 0x3a) goto LAB_0017d7e8;
        uVar9 = (uint)*local_a8;
        *param_3 = __dest;
        if (uVar9 == 0) {
          sVar5 = 0;
          pbVar1 = (byte *)(iVar6 + DAT_0017d81c);
        }
        else {
          if ((((0x19 < uVar9 - 0x41) && (0x19 < uVar9 - 0x61)) && (uVar9 != 0x3a)) &&
             (uVar9 != 0x5f)) {
            uVar2 = FUN_0017a970(param_1,local_a8,auStack_8c);
            if ((int)uVar2 < 0x100) {
              if (((uVar2 - 0x61 < 0x1a) || (uVar2 - 0x41 < 0x1a)) || (uVar2 - 0xc0 < 0x17)) {
                uVar7 = 0;
              }
              else {
                uVar7 = (uint)(0x1e < uVar2 - 0xd8) & (uint)(uVar2 < 0xf8) - ((int)uVar2 >> 0x1f);
              }
            }
            else {
              iVar3 = FUN_0019f630(uVar2,*(undefined4 *)(iVar6 + DAT_0017d820));
              uVar7 = (uint)(iVar3 == 0);
            }
            if (uVar7 != 0) {
              if ((int)uVar2 < 0x100) {
                if (uVar2 != 0x5f) goto LAB_0017d742;
              }
              else if (((DAT_0017d828 < uVar2 + DAT_0017d824) && (uVar2 != DAT_0017d82c)) &&
                      (8 < uVar2 + DAT_0017d830)) {
LAB_0017d742:
                FUN_0017b798(param_1,0xca,iVar6 + DAT_0017d834,param_2);
              }
            }
          }
          sVar5 = 0;
          while ((local_a8 = local_a8 + 1, (int)sVar5 < local_a4 && (uVar9 != 0))) {
            local_88[sVar5] = (byte)uVar9;
            sVar5 = sVar5 + 1;
            uVar9 = (uint)*local_a8;
          }
          if (local_a4 <= (int)sVar5) {
            local_a4 = sVar5 * 2;
            __dest = (void *)(***(code ***)(iVar6 + DAT_0017d810))(local_a4);
            if (__dest != (void *)0x0) {
              memcpy(__dest,local_88,sVar5);
              iVar3 = DAT_0017d814;
              while (uVar9 != 0) {
                pvVar4 = __dest;
                if (local_a4 <= (int)(sVar5 + 9)) {
                  local_a4 = local_a4 << 1;
                  pvVar4 = (void *)(***(code ***)(iVar6 + iVar3))(__dest,local_a4);
                  if (pvVar4 == (void *)0x0) {
                    FUN_00179430(param_1,0);
                    (***(code ***)(iVar6 + DAT_0017d818))(__dest);
                    goto LAB_0017d7e6;
                  }
                }
                *(char *)((int)pvVar4 + sVar5) = (char)uVar9;
                sVar5 = sVar5 + 1;
                bVar8 = *local_a8;
                local_a8 = local_a8 + 1;
                __dest = pvVar4;
                uVar9 = (uint)bVar8;
              }
              *(char *)((int)__dest + sVar5) = (char)uVar9;
              goto LAB_0017d7e8;
            }
            goto LAB_0017d63c;
          }
          pbVar1 = local_88;
        }
        __dest = (void *)FUN_0019c88c(pbVar1,sVar5);
        goto LAB_0017d7e8;
      }
      if (__dest != (void *)0x0) {
        (***(code ***)(iVar6 + DAT_0017d818))(__dest);
      }
      *param_3 = (void *)0x0;
    }
    __dest = (void *)FUN_0019c904(param_2);
  }
LAB_0017d7e8:
  if (local_1c == **(int **)(iVar6 + DAT_0017d80c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest);
}


