/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ed70  Symbol: FUN_0015ed70 */

/* WARNING: Removing unreachable block (ram,0x0015f2b8) */

void * FUN_0015ed70(void *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  zlib_filefunc64_32_def_s *pzVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint in_stack_fffffe9c;
  uint local_160;
  uint local_15c;
  uint local_128;
  int local_124;
  int local_120;
  int local_11c;
  uint local_118;
  int local_114;
  void *local_110;
  uint local_10c;
  undefined4 local_108;
  code *local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  code *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  zlib_filefunc64_32_def_s *local_d8;
  uint local_d0;
  int local_cc;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_a0;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  local_e0 = 0;
  local_e4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    cocos2d::fill_fopen64_filefunc((zlib_filefunc64_def_s *)&local_108);
  }
  else {
    local_108 = *param_2;
    local_104 = (code *)param_2[1];
    uStack_100 = param_2[2];
    local_fc = param_2[3];
    uStack_f8 = param_2[4];
    local_f4 = (code *)param_2[5];
    local_f0 = param_2[6];
    local_ec = param_2[7];
    uStack_e8 = param_2[8];
    local_e4 = param_2[9];
    local_e0 = param_2[10];
  }
  local_dc = param_3;
  pzVar4 = (zlib_filefunc64_32_def_s *)
           cocos2d::call_zopen64((zlib_filefunc64_32_def_s *)&local_108,param_1,5);
  if (pzVar4 == (zlib_filefunc64_32_def_s *)0x0) {
    pvVar10 = (void *)0x0;
  }
  else {
    local_d8 = pzVar4;
    iVar5 = cocos2d::call_zseek64
                      ((cocos2d *)&local_108,pzVar4,(void *)0x0,CONCAT44(in_stack_fffffe9c,2),0);
    if (iVar5 == 0) {
      lVar14 = cocos2d::call_ztell64((zlib_filefunc64_32_def_s *)&local_108,pzVar4);
      uVar6 = (uint)lVar14;
      uVar11 = DAT_0015f0d0;
      uVar13 = DAT_0015f0d4;
      if (((int)((ulonglong)lVar14 >> 0x20) == 0) && (uVar6 <= DAT_0015f0e0)) {
        uVar11 = uVar6;
        uVar13 = 0;
      }
      pvVar10 = malloc(DAT_0015f0e4);
      if (pvVar10 != (void *)0x0) {
        local_160 = 4;
        local_15c = 0;
        do {
          if ((uVar13 <= local_15c) && ((uVar13 != local_15c || (uVar11 <= local_160)))) {
LAB_0015eecc:
            lVar1 = 0;
LAB_0015eed0:
            free(pvVar10);
            if (((((lVar1 == 0) ||
                  (iVar5 = cocos2d::call_zseek64
                                     ((cocos2d *)&local_108,pzVar4,(void *)lVar1,
                                      (ulonglong)in_stack_fffffe9c << 0x20,
                                      (int)((ulonglong)lVar1 >> 0x20)), iVar5 != 0)) ||
                 ((iVar5 = FUN_0015e6d4(&local_108,pzVar4,&local_11c), iVar5 != 0 ||
                  ((iVar5 = FUN_0015e6d4(&local_108,pzVar4,&local_11c), iVar5 != 0 ||
                   (local_11c != 0)))))) ||
                (iVar5 = FUN_0015e73a(&local_108,pzVar4,&local_110), iVar5 != 0)) ||
               (((iVar5 = FUN_0015e6d4(&local_108,pzVar4,&local_11c), iVar5 != 0 || (local_11c != 1)
                 ) || (iVar5 = cocos2d::call_zseek64
                                         ((cocos2d *)&local_108,pzVar4,local_110,
                                          (ulonglong)in_stack_fffffe9c << 0x20,local_10c),
                      iVar5 != 0)))) break;
            iVar5 = FUN_0015e6d4(&local_108,pzVar4,&local_11c);
            uVar2 = CONCAT44(local_10c,local_110);
            if (((iVar5 != 0) || (local_11c != DAT_0015f0e8)) ||
               (((uint)local_110 | local_10c) == 0)) break;
            local_20 = 1;
            iVar5 = cocos2d::call_zseek64
                              ((cocos2d *)&local_108,local_d8,local_110,
                               (ulonglong)in_stack_fffffe9c << 0x20,local_10c);
            if (iVar5 != 0) {
              iVar5 = -1;
            }
            iVar8 = FUN_0015e6d4(&local_108,local_d8,&local_128);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            iVar8 = FUN_0015e73a(&local_108,local_d8,&local_110);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            iVar8 = FUN_0015e6a2(&local_108,local_d8,&local_11c);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            iVar8 = FUN_0015e6a2(&local_108,local_d8,&local_11c);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            iVar8 = FUN_0015e6d4(&local_108,local_d8,&local_124);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            iVar8 = FUN_0015e6d4(&local_108,local_d8,&local_120);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            iVar8 = FUN_0015e73a(&local_108,local_d8,&local_d0);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            iVar8 = FUN_0015e73a(&local_108,local_d8,&local_118);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            if (((local_118 != local_d0) || (local_114 != local_cc)) ||
               ((local_120 != 0 || (local_124 != 0)))) {
              iVar5 = -0x67;
            }
            iVar8 = FUN_0015e73a(&local_108,local_d8,&local_98);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            iVar8 = FUN_0015e73a(&local_108,local_d8,&local_90);
            if (iVar8 != 0) {
              iVar5 = -1;
            }
            local_c8[0] = 0;
            goto LAB_0015f2a2;
          }
          uVar12 = local_160 + DAT_0015f0d8;
          local_15c = local_15c + DAT_0015f0dc + (uint)CARRY4(local_160,DAT_0015f0d8);
          if ((uVar13 < local_15c) ||
             ((local_160 = uVar12, local_15c == uVar13 && (uVar11 < uVar12)))) {
            local_160 = uVar11;
            local_15c = uVar13;
          }
          lVar1 = lVar14 - CONCAT44(local_15c,local_160);
          uVar12 = DAT_0015f0e4;
          if ((local_15c == 0) && (local_160 <= DAT_0015f0e4)) {
            uVar12 = uVar6 - (int)(void *)lVar1;
          }
          iVar5 = cocos2d::call_zseek64
                            ((cocos2d *)&local_108,pzVar4,(void *)lVar1,
                             (ulonglong)in_stack_fffffe9c << 0x20,(int)((ulonglong)lVar1 >> 0x20));
          if ((iVar5 != 0) ||
             (uVar7 = (*local_104)(local_ec,pzVar4,pvVar10,uVar12), uVar7 != uVar12))
          goto LAB_0015eecc;
          iVar5 = uVar12 - 3;
          pcVar9 = (char *)((int)pvVar10 + (uVar12 - 4));
          while (0 < iVar5) {
            iVar5 = iVar5 + -1;
            if ((((*pcVar9 == 'P') && (pcVar9[1] == 'K')) && (pcVar9[2] == '\x06')) &&
               (pcVar9[3] == '\a')) {
              lVar1 = lVar1 + iVar5;
              if (lVar1 != 0) goto LAB_0015eed0;
              break;
            }
            pcVar9 = pcVar9 + -1;
          }
        } while( true );
      }
    }
    pzVar4 = local_d8;
    iVar5 = cocos2d::call_zseek64
                      ((cocos2d *)&local_108,local_d8,(void *)0x0,CONCAT44(in_stack_fffffe9c,2),0);
    if (iVar5 == 0) {
      lVar14 = cocos2d::call_ztell64((zlib_filefunc64_32_def_s *)&local_108,pzVar4);
      uVar6 = (uint)lVar14;
      uVar11 = DAT_0015f0d0;
      uVar13 = DAT_0015f0d4;
      if (((int)((ulonglong)lVar14 >> 0x20) == 0) && (uVar6 <= DAT_0015f0e0)) {
        uVar11 = uVar6;
        uVar13 = 0;
      }
      pvVar10 = malloc(DAT_0015f0e4);
      if (pvVar10 != (void *)0x0) {
        local_160 = 4;
        local_15c = 0;
        do {
          if ((uVar13 <= local_15c) && ((uVar13 != local_15c || (uVar11 <= local_160)))) {
LAB_0015f1aa:
            uVar2 = 0;
LAB_0015f1ae:
            free(pvVar10);
            uVar11 = (uint)(uVar2 == 0);
            goto LAB_0015f1bc;
          }
          uVar12 = local_160 + DAT_0015f310;
          local_15c = local_15c + DAT_0015f314 + (uint)CARRY4(local_160,DAT_0015f310);
          if ((uVar13 < local_15c) ||
             ((local_160 = uVar12, local_15c == uVar13 && (uVar11 < uVar12)))) {
            local_160 = uVar11;
            local_15c = uVar13;
          }
          lVar1 = lVar14 - CONCAT44(local_15c,local_160);
          uVar12 = DAT_0015f318;
          if ((local_15c == 0) && (local_160 <= DAT_0015f318)) {
            uVar12 = uVar6 - (int)(void *)lVar1;
          }
          iVar5 = cocos2d::call_zseek64
                            ((cocos2d *)&local_108,pzVar4,(void *)lVar1,
                             (ulonglong)in_stack_fffffe9c << 0x20,(int)((ulonglong)lVar1 >> 0x20));
          if ((iVar5 != 0) ||
             (uVar7 = (*local_104)(local_ec,pzVar4,pvVar10,uVar12), uVar7 != uVar12))
          goto LAB_0015f1aa;
          iVar5 = uVar12 - 3;
          pcVar9 = (char *)((int)pvVar10 + (uVar12 - 4));
          while (0 < iVar5) {
            iVar5 = iVar5 + -1;
            if ((((*pcVar9 == 'P') && (pcVar9[1] == 'K')) && (pcVar9[2] == '\x05')) &&
               (pcVar9[3] == '\x06')) {
              uVar2 = lVar1 + iVar5;
              if (uVar2 != 0) goto LAB_0015f1ae;
              break;
            }
            pcVar9 = pcVar9 + -1;
          }
        } while( true );
      }
    }
    uVar2 = 0;
    uVar11 = 1;
LAB_0015f1bc:
    local_20 = 0;
    iVar5 = -uVar11;
    iVar8 = cocos2d::call_zseek64
                      ((cocos2d *)&local_108,local_d8,(void *)uVar2,
                       (ulonglong)in_stack_fffffe9c << 0x20,(int)(uVar2 >> 0x20));
    if (iVar8 != 0) {
      iVar5 = -1;
    }
    iVar8 = FUN_0015e6d4(&local_108,local_d8,&local_128);
    if (iVar8 != 0) {
      iVar5 = -1;
    }
    iVar8 = FUN_0015e6a2(&local_108,local_d8,&local_124);
    if (iVar8 != 0) {
      iVar5 = -1;
    }
    iVar8 = FUN_0015e6a2(&local_108,local_d8,&local_120);
    if (iVar8 != 0) {
      iVar5 = -1;
    }
    iVar8 = FUN_0015e6a2(&local_108,local_d8,&local_128);
    if (iVar8 != 0) {
      iVar5 = -1;
    }
    local_d0 = local_128;
    local_cc = 0;
    iVar8 = FUN_0015e6a2(&local_108,local_d8,&local_128);
    if (iVar8 != 0) {
      iVar5 = -1;
    }
    local_114 = 0;
    local_118 = local_128;
    if (((local_d0 != local_128) || (local_cc != 0)) || ((local_120 != 0 || (local_124 != 0)))) {
      iVar5 = -0x67;
    }
    iVar8 = FUN_0015e6d4(&local_108,local_d8,&local_128);
    if (iVar8 != 0) {
      iVar5 = -1;
    }
    local_98 = local_128;
    local_94 = 0;
    iVar8 = FUN_0015e6d4(&local_108,local_d8,&local_128);
    if (iVar8 != 0) {
      iVar5 = -1;
    }
    local_90 = local_128;
    local_8c = 0;
    iVar8 = FUN_0015e6a2(&local_108,local_d8,local_c8);
    if (iVar8 != 0) {
      iVar5 = -1;
    }
LAB_0015f2a2:
    uVar3 = CONCAT44(local_8c + local_94 + (uint)CARRY4(local_90,local_98),local_90 + local_98);
    if (((iVar5 == 0) && (uVar2 < uVar3)) || (iVar5 != 0)) {
      (*local_f4)(local_ec,local_d8);
      pvVar10 = (void *)0x0;
    }
    else {
      local_c0 = uVar2 - uVar3;
      local_28 = iVar5;
      local_24 = iVar5;
      local_a0 = uVar2;
      pvVar10 = malloc(0xf0);
      if (pvVar10 != (void *)0x0) {
        memcpy(pvVar10,&local_108,0xf0);
        cocos2d::unzGoToFirstFile(pvVar10);
      }
    }
  }
  return pvVar10;
}


