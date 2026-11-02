/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000be2aa  Symbol: FUN_000be2aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000be2aa(float param_1,float param_2)

{
  int *piVar1;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar2;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int *unaff_r5;
  int iVar11;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *unaff_r6;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  float fVar12;
  float extraout_s1;
  float extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  int param_7;
  int param_8;
  int param_9;
  int param_10;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  void *in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 param_11;
  undefined4 param_12;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  
  iVar10 = *unaff_r5;
  cocos2d::CCSize::CCSize((CCSize *)&stack0x00000064,param_1,param_2);
  *(undefined4 *)(iVar10 + 0x18) = param_11;
  *(undefined4 *)(iVar10 + 0x1c) = param_12;
  FUN_000bdb32();
  *(undefined4 *)(*unaff_r5 + 0x38) = DAT_000be330;
  pcVar9 = (char *)(DAT_000bdcc4 + 0xbdc00);
  iVar10 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::HasMember(unaff_r6,pcVar9);
  if (iVar10 != 0) {
    pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](unaff_r6,pcVar9);
    iVar10 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::operator[](pGVar2,(char *)(DAT_000bdcc8 + 0xbdc18));
    if (*(int *)(iVar10 + 0xc) << 0x17 < 0) {
      iVar10 = *unaff_r5;
      pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar9);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar2,(char *)(DAT_000bdccc + 0xbdc32));
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      GetDouble();
      uVar6 = __truncdfsf2();
      *(undefined4 *)(iVar10 + 0x3c) = uVar6;
      goto LAB_000bdc3e;
    }
  }
  *(undefined4 *)(*unaff_r5 + 0x3c) = DAT_000be330;
LAB_000bdc3e:
  if (*unaff_r5 != 0) {
    uVar8 = 0;
    iVar10 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                           *)(*in_stack_00000018 + *in_stack_0000001c * 0x10),
                          (char *)(DAT_000bdcd0 + 0xbdc54));
    if (*(int *)(iVar10 + 4) == 0) {
      uVar6 = __floatsisf(param_8);
      iVar7 = *unaff_r5;
      uVar4 = *(undefined4 *)(iVar7 + 0x10);
      iVar10 = __aeabi_fcmplt(uVar4,uVar6);
      if (iVar10 != 0) {
        param_8 = __fixsfsi(uVar4);
      }
      uVar6 = __floatsisf(*(undefined4 *)(iVar7 + 0x28));
      uVar6 = __addsf3(uVar4,uVar6);
      uVar4 = __floatsisf(in_stack_00000020);
      iVar10 = __aeabi_fcmpgt(uVar6,uVar4);
      if (iVar10 != 0) {
        in_stack_00000020 = __fixsfsi(uVar6);
      }
      uVar6 = __floatsisf(param_9);
      uVar4 = *(undefined4 *)(iVar7 + 0x14);
      iVar10 = __aeabi_fcmplt(uVar4,uVar6);
      if (iVar10 != 0) {
        param_9 = __fixsfsi(uVar4);
      }
      uVar6 = __floatsisf(*(undefined4 *)(iVar7 + 0x2c));
      uVar5 = __addsf3(uVar4,uVar6);
      uVar6 = __floatsisf(in_stack_00000024);
      iVar10 = __aeabi_fcmpgt(uVar5,uVar6);
      uVar6 = extraout_s0_01;
      uVar4 = extraout_s1_01;
      if (iVar10 != 0) {
        in_stack_00000024 = __fixsfsi(uVar5);
        uVar6 = extraout_s0_02;
        uVar4 = extraout_s1_02;
      }
      uVar13 = CONCAT44(uVar4,uVar6);
      iVar10 = 0;
      do {
        iVar11 = iVar10 * 0x1c;
        *(undefined4 *)(*unaff_r5 + iVar11 + 0x4c) = DAT_000be330;
        iVar7 = *unaff_r5;
        uVar13 = cocos2d::CCPoint::CCPoint
                           ((CCPoint *)&stack0x00000084,(float)uVar13,
                            (float)((ulonglong)uVar13 >> 0x20));
        *(undefined4 *)(iVar7 + iVar11 + 0x50) = in_stack_00000084;
        *(undefined4 *)(iVar7 + iVar11 + 0x54) = in_stack_00000088;
        iVar7 = *unaff_r5;
        uVar13 = cocos2d::CCSize::CCSize
                           ((CCSize *)&stack0x0000008c,(float)uVar13,
                            (float)((ulonglong)uVar13 >> 0x20));
        uVar6 = DAT_000be330;
        *(undefined4 *)(iVar7 + iVar11 + 0x58) = in_stack_0000008c;
        iVar10 = iVar10 + 1;
        *(undefined4 *)(iVar7 + iVar11 + 0x5c) = in_stack_00000090;
        *(undefined4 *)(*unaff_r5 + iVar11 + 100) = uVar6;
        *(undefined4 *)(*unaff_r5 + iVar11 + 0x60) = uVar6;
      } while (iVar10 != 0x50);
    }
    else {
      while( true ) {
        pcVar9 = (char *)(DAT_000be0b8 + 0xbe052);
        iVar10 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                               *)(*in_stack_00000018 + *in_stack_0000001c * 0x10),pcVar9);
        if (*(uint *)(iVar10 + 4) <= uVar8) break;
        piVar1 = (int *)rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                      *)(*in_stack_00000018 + *in_stack_0000001c * 0x10),pcVar9);
        iVar10 = DAT_000be070;
        pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  *)rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                  *)(*piVar1 + *(int *)(uVar8 * 4 + DAT_000be068 + 0xbdcf0) * 0x10),
                                 (char *)(DAT_000be06c + 0xbdcfa));
        pcVar9 = (char *)(iVar10 + 0xbdd02);
        iVar10 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar9);
        if (iVar10 == 0) {
LAB_000be2d4:
          *(undefined4 *)(*unaff_r5 + uVar8 * 0x1c + 0x4c) = _DAT_000be334;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          iVar10 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be074 + 0xbdd1c));
          if (-1 < *(int *)(iVar10 + 0xc) << 0x17) goto LAB_000be2d4;
          iVar10 = *unaff_r5;
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be078 + 0xbdd3c));
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::GetDouble();
          uVar6 = __truncdfsf2();
          *(undefined4 *)(iVar10 + uVar8 * 0x1c + 0x4c) = uVar6;
        }
        uVar6 = *(undefined4 *)(*unaff_r5 + uVar8 * 0x1c + 0x4c);
        iVar10 = __aeabi_fcmplt(in_stack_0000003c,uVar6);
        if (iVar10 != 0) {
          *(int *)(param_7 + 0x290) = param_10;
          *(undefined4 *)(param_7 + 0x294) = uVar6;
          in_stack_0000003c = uVar6;
        }
        pcVar9 = (char *)(DAT_000be07c + 0xbdd7c);
        iVar10 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar9);
        if (iVar10 == 0) {
LAB_000be2e2:
          uVar6 = DAT_000be330;
          *(undefined4 *)(*unaff_r5 + uVar8 * 0x1c + 0x50) = DAT_000be330;
          *(undefined4 *)(*unaff_r5 + uVar8 * 0x1c + 0x54) = uVar6;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          iVar10 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be080 + 0xbdd94));
          if (-1 < *(int *)(iVar10 + 0xc) << 0x17) goto LAB_000be2e2;
          iVar10 = *unaff_r5;
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be084 + 0xbddb0));
          uVar13 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be088 + 0xbddc8));
          uVar15 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          __truncdfsf2((int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
          uVar13 = __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x0000006c,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
          iVar10 = iVar10 + uVar8 * 0x1c;
          *(undefined4 *)(iVar10 + 0x50) = in_stack_0000006c;
          *(undefined4 *)(iVar10 + 0x54) = in_stack_00000070;
        }
        pcVar9 = (char *)(DAT_000be08c + 0xbde06);
        iVar10 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar9);
        fVar12 = extraout_s0;
        fVar14 = extraout_s1;
        if (iVar10 == 0) {
LAB_000be2f6:
          iVar10 = *unaff_r5;
          cocos2d::CCSize::CCSize((CCSize *)&stack0x0000007c,fVar12,fVar14);
          iVar10 = iVar10 + uVar8 * 0x1c;
          *(undefined4 *)(iVar10 + 0x58) = in_stack_0000007c;
          *(undefined4 *)(iVar10 + 0x5c) = in_stack_00000080;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          iVar10 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be090 + 0xbde1e));
          fVar12 = extraout_s0_00;
          fVar14 = extraout_s1_00;
          if (-1 < *(int *)(iVar10 + 0xc) << 0x17) goto LAB_000be2f6;
          iVar10 = *unaff_r5;
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be094 + 0xbde3a));
          uVar13 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be098 + 0xbde52));
          uVar15 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          __truncdfsf2((int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
          uVar13 = __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          cocos2d::CCSize::CCSize
                    ((CCSize *)&stack0x00000074,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
          iVar10 = iVar10 + uVar8 * 0x1c;
          *(undefined4 *)(iVar10 + 0x58) = in_stack_00000074;
          *(undefined4 *)(iVar10 + 0x5c) = in_stack_00000078;
        }
        pcVar9 = (char *)(DAT_000be09c + 0xbde90);
        iVar10 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar9);
        if (iVar10 == 0) {
LAB_000be312:
          *(undefined4 *)(*unaff_r5 + uVar8 * 0x1c + 0x60) = DAT_000be330;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          iVar10 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be0a0 + 0xbdea8));
          if (-1 < *(int *)(iVar10 + 0xc) << 0x17) goto LAB_000be312;
          iVar10 = *unaff_r5;
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be0a4 + 0xbdec8));
          uVar13 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_000be060,DAT_000be064);
          uVar6 = __truncdfsf2();
          *(undefined4 *)(iVar10 + uVar8 * 0x1c + 0x60) = uVar6;
        }
        pcVar9 = (char *)(DAT_000be0a8 + 0xbdee8);
        iVar10 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar9);
        if (iVar10 == 0) {
LAB_000be320:
          *(undefined4 *)(*unaff_r5 + uVar8 * 0x1c + 100) = DAT_000be330;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          iVar10 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be0ac + 0xbdf00));
          if (-1 < *(int *)(iVar10 + 0xc) << 0x17) goto LAB_000be320;
          iVar10 = *unaff_r5;
          pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar9);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar2,(char *)(DAT_000be0b0 + 0xbdf20));
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::GetDouble();
          uVar6 = __truncdfsf2();
          *(undefined4 *)(iVar10 + uVar8 * 0x1c + 100) = uVar6;
        }
        iVar7 = *unaff_r5;
        uVar6 = *(undefined4 *)(iVar7 + uVar8 * 0x1c + 0x50);
        iVar10 = __aeabi_fcmpeq(uVar6,DAT_000be0b4);
        if ((iVar10 == 0) && (iVar10 = __aeabi_fcmpeq(uVar6,0), iVar10 == 0)) {
          uVar6 = __addsf3(uVar6,*(undefined4 *)(iVar7 + 0x10));
          uVar4 = __floatsisf(param_8);
          iVar10 = __aeabi_fcmplt(uVar6,uVar4);
          if (iVar10 != 0) {
            param_8 = __fixsfsi(uVar6);
          }
          uVar4 = __floatsisf(*(undefined4 *)(iVar7 + 0x28));
          uVar6 = __addsf3(uVar6,uVar4);
          uVar4 = __floatsisf(in_stack_00000020);
          iVar10 = __aeabi_fcmpgt(uVar6,uVar4);
          if (iVar10 != 0) {
            in_stack_00000020 = __fixsfsi(uVar6);
          }
          uVar6 = __addsf3(*(undefined4 *)(iVar7 + 0x14),
                           *(undefined4 *)(iVar7 + uVar8 * 0x1c + 0x54));
        }
        else {
          uVar6 = __floatsisf(param_8);
          uVar4 = *(undefined4 *)(iVar7 + 0x10);
          iVar10 = __aeabi_fcmplt(uVar4,uVar6);
          if (iVar10 != 0) {
            param_8 = __fixsfsi(uVar4);
          }
          uVar6 = __floatsisf(*(undefined4 *)(iVar7 + 0x28));
          uVar6 = __addsf3(uVar4,uVar6);
          uVar4 = __floatsisf(in_stack_00000020);
          iVar10 = __aeabi_fcmpgt(uVar6,uVar4);
          if (iVar10 != 0) {
            in_stack_00000020 = __fixsfsi(uVar6);
          }
          uVar6 = *(undefined4 *)(iVar7 + 0x14);
        }
        uVar4 = __floatsisf(param_9);
        iVar10 = __aeabi_fcmplt(uVar6,uVar4);
        if (iVar10 != 0) {
          param_9 = __fixsfsi(uVar6);
        }
        uVar4 = __floatsisf(*(undefined4 *)(iVar7 + 0x2c));
        uVar6 = __addsf3(uVar6,uVar4);
        uVar4 = __floatsisf(in_stack_00000024);
        iVar10 = __aeabi_fcmpgt(uVar6,uVar4);
        if (iVar10 != 0) {
          in_stack_00000024 = __fixsfsi(uVar6);
        }
        uVar8 = uVar8 + 1;
      }
    }
  }
  uVar8 = in_stack_00000018[1];
  if (param_10 + 1U < uVar8) {
    FUN_000bd9d8();
  }
  iVar7 = 0;
  iVar10 = uVar8 * 4;
  for (; (int)uVar8 < 0x50; uVar8 = uVar8 + 1) {
    *(undefined4 *)(param_7 + iVar10 + iVar7) = 0;
    iVar7 = iVar7 + 4;
  }
  iVar10 = 0;
  do {
    iVar7 = param_7 + iVar10;
    iVar10 = iVar10 + 4;
    *(undefined4 *)(iVar7 + 0x140) = 0;
  } while (iVar10 != 0x140);
  __floatsisf((in_stack_00000020 - param_8) / 2);
  uVar13 = __floatsisf((in_stack_00000024 - param_9) / 2);
  cocos2d::CCSize::CCSize
            ((CCSize *)&stack0x00000094,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  __floatsisf(param_8 / 2);
  uVar13 = __floatsisf(param_9 / 2);
  cocos2d::CCSize::CCSize
            ((CCSize *)&stack0x0000009c,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  uVar6 = __fixsfsi(in_stack_00000094);
  *(undefined4 *)(param_7 + 0x284) = uVar6;
  uVar6 = __fixsfsi(in_stack_00000098);
  *(undefined4 *)(param_7 + 0x280) = uVar6;
  uVar6 = __fixsfsi(in_stack_0000009c);
  *(undefined4 *)(param_7 + 0x288) = uVar6;
  uVar6 = __fixsfsi(in_stack_000000a0);
  *(undefined4 *)(param_7 + 0x28c) = uVar6;
  free(in_stack_00000038);
  FUN_001edf58(&stack0x00000044);
  FUN_001ed6b8(&stack0x00000044);
  cocos2d::CCFileData::~CCFileData((CCFileData *)&stack0x000000a4);
  rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
            ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&stack0x000000c0);
  return 1;
}


