/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bdb32  Symbol: FUN_000bdb32 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000bdb32(void)

{
  int iVar1;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar2;
  undefined4 *puVar3;
  int *piVar4;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int *unaff_r5;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *unaff_r6;
  int iVar12;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  float fVar13;
  float extraout_s1;
  float extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  int param_7;
  int param_8;
  int param_9;
  int param_10;
  int *param_11;
  int *param_12;
  int param_13;
  int param_14;
  void *in_stack_00000038;
  undefined4 param_19;
  undefined4 param_20;
  undefined4 param_21;
  undefined4 param_22;
  undefined4 param_23;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 param_24;
  undefined4 param_25;
  undefined4 param_26;
  undefined4 param_27;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  
  pcVar11 = (char *)(DAT_000bdca0 + 0xbdb3a);
  iVar1 = rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::HasMember(unaff_r6,pcVar11);
  if (iVar1 != 0) {
    pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](unaff_r6,pcVar11);
    iVar1 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::operator[](pGVar2,(char *)(DAT_000bdca4 + 0xbdb50));
    if (*(int *)(iVar1 + 0xc) << 0x17 < 0) {
      iVar1 = *unaff_r5;
      pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar11);
      puVar3 = (undefined4 *)
               rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::operator[](pGVar2,(char *)(DAT_000bdca8 + 0xbdb68));
      *(undefined4 *)(iVar1 + 0x28) = *puVar3;
    }
  }
  pcVar11 = (char *)(DAT_000bdcac + 0xbdb76);
  iVar1 = rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::HasMember(unaff_r6,pcVar11);
  if (iVar1 != 0) {
    pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](unaff_r6,pcVar11);
    iVar1 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::operator[](pGVar2,(char *)(DAT_000bdcb0 + 0xbdb8c));
    if (*(int *)(iVar1 + 0xc) << 0x17 < 0) {
      iVar1 = *unaff_r5;
      pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar11);
      puVar3 = (undefined4 *)
               rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::operator[](pGVar2,(char *)(DAT_000bdcb4 + 0xbdba4));
      *(undefined4 *)(iVar1 + 0x2c) = *puVar3;
    }
  }
  pcVar11 = (char *)(DAT_000bdcb8 + 0xbdbb2);
  iVar1 = rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::HasMember(unaff_r6,pcVar11);
  if (iVar1 == 0) {
LAB_000be2c4:
    *(undefined4 *)(*unaff_r5 + 0x38) = DAT_000be330;
  }
  else {
    pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](unaff_r6,pcVar11);
    iVar1 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::operator[](pGVar2,(char *)(DAT_000bdcbc + 0xbdbca));
    if (-1 < *(int *)(iVar1 + 0xc) << 0x17) goto LAB_000be2c4;
    iVar1 = *unaff_r5;
    pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](unaff_r6,pcVar11);
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[](pGVar2,(char *)(DAT_000bdcc0 + 0xbdbe4));
    uVar14 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::GetDouble();
    __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000bdc68,DAT_000bdc6c);
    uVar8 = __truncdfsf2();
    *(undefined4 *)(iVar1 + 0x38) = uVar8;
  }
  pcVar11 = (char *)(DAT_000bdcc4 + 0xbdc00);
  iVar1 = rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::HasMember(unaff_r6,pcVar11);
  if (iVar1 != 0) {
    pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](unaff_r6,pcVar11);
    iVar1 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::operator[](pGVar2,(char *)(DAT_000bdcc8 + 0xbdc18));
    if (*(int *)(iVar1 + 0xc) << 0x17 < 0) {
      iVar1 = *unaff_r5;
      pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar11);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar2,(char *)(DAT_000bdccc + 0xbdc32));
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      GetDouble();
      uVar8 = __truncdfsf2();
      *(undefined4 *)(iVar1 + 0x3c) = uVar8;
      goto LAB_000bdc3e;
    }
  }
  *(undefined4 *)(*unaff_r5 + 0x3c) = DAT_000be330;
LAB_000bdc3e:
  if (*unaff_r5 != 0) {
    uVar10 = 0;
    iVar1 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                          *)(*param_11 + *param_12 * 0x10),(char *)(DAT_000bdcd0 + 0xbdc54));
    if (*(int *)(iVar1 + 4) == 0) {
      uVar8 = __floatsisf(param_8);
      iVar9 = *unaff_r5;
      uVar6 = *(undefined4 *)(iVar9 + 0x10);
      iVar1 = __aeabi_fcmplt(uVar6,uVar8);
      if (iVar1 != 0) {
        param_8 = __fixsfsi(uVar6);
      }
      uVar8 = __floatsisf(*(undefined4 *)(iVar9 + 0x28));
      uVar8 = __addsf3(uVar6,uVar8);
      uVar6 = __floatsisf(param_13);
      iVar1 = __aeabi_fcmpgt(uVar8,uVar6);
      if (iVar1 != 0) {
        param_13 = __fixsfsi(uVar8);
      }
      uVar8 = __floatsisf(param_9);
      uVar6 = *(undefined4 *)(iVar9 + 0x14);
      iVar1 = __aeabi_fcmplt(uVar6,uVar8);
      if (iVar1 != 0) {
        param_9 = __fixsfsi(uVar6);
      }
      uVar8 = __floatsisf(*(undefined4 *)(iVar9 + 0x2c));
      uVar7 = __addsf3(uVar6,uVar8);
      uVar8 = __floatsisf(param_14);
      iVar1 = __aeabi_fcmpgt(uVar7,uVar8);
      uVar8 = extraout_s0_01;
      uVar6 = extraout_s1_01;
      if (iVar1 != 0) {
        param_14 = __fixsfsi(uVar7);
        uVar8 = extraout_s0_02;
        uVar6 = extraout_s1_02;
      }
      uVar14 = CONCAT44(uVar6,uVar8);
      iVar1 = 0;
      do {
        iVar12 = iVar1 * 0x1c;
        *(undefined4 *)(*unaff_r5 + iVar12 + 0x4c) = DAT_000be330;
        iVar9 = *unaff_r5;
        uVar14 = cocos2d::CCPoint::CCPoint
                           ((CCPoint *)&stack0x00000084,(float)uVar14,
                            (float)((ulonglong)uVar14 >> 0x20));
        *(undefined4 *)(iVar9 + iVar12 + 0x50) = param_24;
        *(undefined4 *)(iVar9 + iVar12 + 0x54) = param_25;
        iVar9 = *unaff_r5;
        uVar14 = cocos2d::CCSize::CCSize
                           ((CCSize *)&stack0x0000008c,(float)uVar14,
                            (float)((ulonglong)uVar14 >> 0x20));
        uVar8 = DAT_000be330;
        *(undefined4 *)(iVar9 + iVar12 + 0x58) = param_26;
        iVar1 = iVar1 + 1;
        *(undefined4 *)(iVar9 + iVar12 + 0x5c) = param_27;
        *(undefined4 *)(*unaff_r5 + iVar12 + 100) = uVar8;
        *(undefined4 *)(*unaff_r5 + iVar12 + 0x60) = uVar8;
      } while (iVar1 != 0x50);
    }
    else {
      while( true ) {
        pcVar11 = (char *)(DAT_000be0b8 + 0xbe052);
        iVar1 = rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                              *)(*param_11 + *param_12 * 0x10),pcVar11);
        if (*(uint *)(iVar1 + 4) <= uVar10) break;
        piVar4 = (int *)rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                      *)(*param_11 + *param_12 * 0x10),pcVar11);
        iVar1 = DAT_000be070;
        pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  *)rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                  *)(*piVar4 + *(int *)(uVar10 * 4 + DAT_000be068 + 0xbdcf0) * 0x10)
                                 ,(char *)(DAT_000be06c + 0xbdcfa));
        pcVar11 = (char *)(iVar1 + 0xbdd02);
        iVar1 = rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::HasMember(pGVar2,pcVar11);
        if (iVar1 == 0) {
LAB_000be2d4:
          *(undefined4 *)(*unaff_r5 + uVar10 * 0x1c + 0x4c) = _DAT_000be334;
        }
        else {
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          iVar1 = rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar5,(char *)(DAT_000be074 + 0xbdd1c));
          if (-1 < *(int *)(iVar1 + 0xc) << 0x17) goto LAB_000be2d4;
          iVar1 = *unaff_r5;
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar5,(char *)(DAT_000be078 + 0xbdd3c));
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::GetDouble();
          uVar8 = __truncdfsf2();
          *(undefined4 *)(iVar1 + uVar10 * 0x1c + 0x4c) = uVar8;
        }
        uVar8 = *(undefined4 *)(*unaff_r5 + uVar10 * 0x1c + 0x4c);
        iVar1 = __aeabi_fcmplt(param_19,uVar8);
        if (iVar1 != 0) {
          *(int *)(param_7 + 0x290) = param_10;
          *(undefined4 *)(param_7 + 0x294) = uVar8;
          param_19 = uVar8;
        }
        pcVar11 = (char *)(DAT_000be07c + 0xbdd7c);
        iVar1 = rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::HasMember(pGVar2,pcVar11);
        if (iVar1 == 0) {
LAB_000be2e2:
          uVar8 = DAT_000be330;
          *(undefined4 *)(*unaff_r5 + uVar10 * 0x1c + 0x50) = DAT_000be330;
          *(undefined4 *)(*unaff_r5 + uVar10 * 0x1c + 0x54) = uVar8;
        }
        else {
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          iVar1 = rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar5,(char *)(DAT_000be080 + 0xbdd94));
          if (-1 < *(int *)(iVar1 + 0xc) << 0x17) goto LAB_000be2e2;
          iVar1 = *unaff_r5;
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar5,(char *)(DAT_000be084 + 0xbddb0));
          uVar14 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar5,(char *)(DAT_000be088 + 0xbddc8));
          uVar16 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          __truncdfsf2((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
          uVar14 = __truncdfsf2((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x0000006c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          iVar1 = iVar1 + uVar10 * 0x1c;
          *(undefined4 *)(iVar1 + 0x50) = param_20;
          *(undefined4 *)(iVar1 + 0x54) = param_21;
        }
        pcVar11 = (char *)(DAT_000be08c + 0xbde06);
        iVar1 = rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::HasMember(pGVar2,pcVar11);
        fVar13 = extraout_s0;
        fVar15 = extraout_s1;
        if (iVar1 == 0) {
LAB_000be2f6:
          iVar1 = *unaff_r5;
          cocos2d::CCSize::CCSize((CCSize *)&stack0x0000007c,fVar13,fVar15);
          iVar1 = iVar1 + uVar10 * 0x1c;
          *(undefined4 *)(iVar1 + 0x58) = in_stack_0000007c;
          *(undefined4 *)(iVar1 + 0x5c) = in_stack_00000080;
        }
        else {
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          iVar1 = rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar5,(char *)(DAT_000be090 + 0xbde1e));
          fVar13 = extraout_s0_00;
          fVar15 = extraout_s1_00;
          if (-1 < *(int *)(iVar1 + 0xc) << 0x17) goto LAB_000be2f6;
          iVar1 = *unaff_r5;
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar5,(char *)(DAT_000be094 + 0xbde3a));
          uVar14 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar5,(char *)(DAT_000be098 + 0xbde52));
          uVar16 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          __truncdfsf2((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
          uVar14 = __truncdfsf2((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          cocos2d::CCSize::CCSize
                    ((CCSize *)&stack0x00000074,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          iVar1 = iVar1 + uVar10 * 0x1c;
          *(undefined4 *)(iVar1 + 0x58) = param_22;
          *(undefined4 *)(iVar1 + 0x5c) = param_23;
        }
        pcVar11 = (char *)(DAT_000be09c + 0xbde90);
        iVar1 = rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::HasMember(pGVar2,pcVar11);
        if (iVar1 == 0) {
LAB_000be312:
          *(undefined4 *)(*unaff_r5 + uVar10 * 0x1c + 0x60) = DAT_000be330;
        }
        else {
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          iVar1 = rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar5,(char *)(DAT_000be0a0 + 0xbdea8));
          if (-1 < *(int *)(iVar1 + 0xc) << 0x17) goto LAB_000be312;
          iVar1 = *unaff_r5;
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar5,(char *)(DAT_000be0a4 + 0xbdec8));
          uVar14 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000be060,DAT_000be064);
          uVar8 = __truncdfsf2();
          *(undefined4 *)(iVar1 + uVar10 * 0x1c + 0x60) = uVar8;
        }
        pcVar11 = (char *)(DAT_000be0a8 + 0xbdee8);
        iVar1 = rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::HasMember(pGVar2,pcVar11);
        if (iVar1 == 0) {
LAB_000be320:
          *(undefined4 *)(*unaff_r5 + uVar10 * 0x1c + 100) = DAT_000be330;
        }
        else {
          pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          iVar1 = rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar5,(char *)(DAT_000be0ac + 0xbdf00));
          if (-1 < *(int *)(iVar1 + 0xc) << 0x17) goto LAB_000be320;
          iVar1 = *unaff_r5;
          pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar11);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar2,(char *)(DAT_000be0b0 + 0xbdf20));
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::GetDouble();
          uVar8 = __truncdfsf2();
          *(undefined4 *)(iVar1 + uVar10 * 0x1c + 100) = uVar8;
        }
        iVar9 = *unaff_r5;
        uVar8 = *(undefined4 *)(iVar9 + uVar10 * 0x1c + 0x50);
        iVar1 = __aeabi_fcmpeq(uVar8,DAT_000be0b4);
        if ((iVar1 == 0) && (iVar1 = __aeabi_fcmpeq(uVar8,0), iVar1 == 0)) {
          uVar8 = __addsf3(uVar8,*(undefined4 *)(iVar9 + 0x10));
          uVar6 = __floatsisf(param_8);
          iVar1 = __aeabi_fcmplt(uVar8,uVar6);
          if (iVar1 != 0) {
            param_8 = __fixsfsi(uVar8);
          }
          uVar6 = __floatsisf(*(undefined4 *)(iVar9 + 0x28));
          uVar8 = __addsf3(uVar8,uVar6);
          uVar6 = __floatsisf(param_13);
          iVar1 = __aeabi_fcmpgt(uVar8,uVar6);
          if (iVar1 != 0) {
            param_13 = __fixsfsi(uVar8);
          }
          uVar8 = __addsf3(*(undefined4 *)(iVar9 + 0x14),
                           *(undefined4 *)(iVar9 + uVar10 * 0x1c + 0x54));
        }
        else {
          uVar8 = __floatsisf(param_8);
          uVar6 = *(undefined4 *)(iVar9 + 0x10);
          iVar1 = __aeabi_fcmplt(uVar6,uVar8);
          if (iVar1 != 0) {
            param_8 = __fixsfsi(uVar6);
          }
          uVar8 = __floatsisf(*(undefined4 *)(iVar9 + 0x28));
          uVar8 = __addsf3(uVar6,uVar8);
          uVar6 = __floatsisf(param_13);
          iVar1 = __aeabi_fcmpgt(uVar8,uVar6);
          if (iVar1 != 0) {
            param_13 = __fixsfsi(uVar8);
          }
          uVar8 = *(undefined4 *)(iVar9 + 0x14);
        }
        uVar6 = __floatsisf(param_9);
        iVar1 = __aeabi_fcmplt(uVar8,uVar6);
        if (iVar1 != 0) {
          param_9 = __fixsfsi(uVar8);
        }
        uVar6 = __floatsisf(*(undefined4 *)(iVar9 + 0x2c));
        uVar8 = __addsf3(uVar8,uVar6);
        uVar6 = __floatsisf(param_14);
        iVar1 = __aeabi_fcmpgt(uVar8,uVar6);
        if (iVar1 != 0) {
          param_14 = __fixsfsi(uVar8);
        }
        uVar10 = uVar10 + 1;
      }
    }
  }
  uVar10 = param_11[1];
  if (param_10 + 1U < uVar10) {
    FUN_000bd9d8();
  }
  iVar9 = 0;
  iVar1 = uVar10 * 4;
  for (; (int)uVar10 < 0x50; uVar10 = uVar10 + 1) {
    *(undefined4 *)(param_7 + iVar1 + iVar9) = 0;
    iVar9 = iVar9 + 4;
  }
  iVar1 = 0;
  do {
    iVar9 = param_7 + iVar1;
    iVar1 = iVar1 + 4;
    *(undefined4 *)(iVar9 + 0x140) = 0;
  } while (iVar1 != 0x140);
  __floatsisf((param_13 - param_8) / 2);
  uVar14 = __floatsisf((param_14 - param_9) / 2);
  cocos2d::CCSize::CCSize
            ((CCSize *)&stack0x00000094,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  __floatsisf(param_8 / 2);
  uVar14 = __floatsisf(param_9 / 2);
  cocos2d::CCSize::CCSize
            ((CCSize *)&stack0x0000009c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  uVar8 = __fixsfsi(in_stack_00000094);
  *(undefined4 *)(param_7 + 0x284) = uVar8;
  uVar8 = __fixsfsi(in_stack_00000098);
  *(undefined4 *)(param_7 + 0x280) = uVar8;
  uVar8 = __fixsfsi(in_stack_0000009c);
  *(undefined4 *)(param_7 + 0x288) = uVar8;
  uVar8 = __fixsfsi(in_stack_000000a0);
  *(undefined4 *)(param_7 + 0x28c) = uVar8;
  free(in_stack_00000038);
  FUN_001edf58(&stack0x00000044);
  FUN_001ed6b8(&stack0x00000044);
  cocos2d::CCFileData::~CCFileData((CCFileData *)&stack0x000000a4);
  rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
            ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&stack0x000000c0);
  return 1;
}


