/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd9d8  Symbol: FUN_000bd9d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000bd9d8(void)

{
  int iVar1;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar2;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int *unaff_r5;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  float fVar13;
  float extraout_s1;
  float extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int param_7;
  int param_8;
  int param_9;
  int param_10;
  int *param_11;
  int *param_12;
  int in_stack_00000020;
  int in_stack_00000024;
  void *in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 param_15;
  undefined4 param_16;
  undefined4 param_17;
  undefined4 param_18;
  undefined4 param_19;
  undefined4 param_20;
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
  iVar1 = rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        *)(*param_11 + param_10 * 0x10),(char *)(DAT_000bdc70 + 0xbd9ea));
  iVar11 = DAT_000bdc74;
  *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(iVar1 + 4);
  *(int *)(*unaff_r5 + 4) = param_11[1];
  pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            *)rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            *)(*param_11 + *param_12 * 0x10),(char *)(iVar11 + 0xbd9fa));
  iVar11 = *unaff_r5;
  pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            *)rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar2,(char *)(DAT_000bdc78 + 0xbda16));
  puVar4 = (undefined4 *)
           rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::operator[](pGVar3,(char *)(DAT_000bdc7c + 0xbda1e));
  FUN_001ed9dc(iVar11,*puVar4);
  iVar11 = DAT_000bdc80;
  iVar1 = *unaff_r5;
  *(undefined4 *)(iVar1 + 0x30) = param_15;
  pcVar12 = (char *)(iVar11 + 0xbda38);
  *(undefined4 *)(iVar1 + 0x34) = param_16;
  iVar11 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::HasMember(pGVar2,pcVar12);
  if (iVar11 != 0) {
    pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](pGVar2,pcVar12);
    iVar11 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::operator[](pGVar3,(char *)(DAT_000bdc84 + 0xbda50));
    if (*(int *)(iVar11 + 0xc) << 0x17 < 0) {
      iVar11 = *unaff_r5;
      pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar2,pcVar12);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar3,(char *)(DAT_000bdc88 + 0xbda68));
      uVar15 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar2,pcVar12);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar3,(char *)(DAT_000bdc8c + 0xbda80));
      uVar16 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      uVar15 = __truncdfsf2((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x00000054,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
      *(undefined4 *)(iVar11 + 0x10) = param_17;
      *(undefined4 *)(iVar11 + 0x14) = param_18;
    }
  }
  pcVar12 = (char *)(DAT_000bdc90 + 0xbdab6);
  iVar11 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::HasMember(pGVar2,pcVar12);
  if (iVar11 == 0) {
    FUN_000be2aa();
  }
  pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            *)rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar2,pcVar12);
  iVar11 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::operator[](pGVar3,(char *)(DAT_000bdc94 + 0xbdad0));
  if (-1 < *(int *)(iVar11 + 0xc) << 0x17) {
    FUN_000be2aa();
  }
  iVar11 = *unaff_r5;
  pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            *)rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar2,pcVar12);
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[](pGVar3,(char *)(DAT_000bdc98 + 0xbdaec));
  uVar15 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::GetDouble();
  pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            *)rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar2,pcVar12);
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[](pGVar3,(char *)(DAT_000bdc9c + 0xbdb04));
  uVar16 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::GetDouble();
  __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  uVar15 = __truncdfsf2((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  cocos2d::CCSize::CCSize
            ((CCSize *)&stack0x0000005c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  *(undefined4 *)(iVar11 + 0x18) = param_19;
  *(undefined4 *)(iVar11 + 0x1c) = param_20;
  pcVar12 = (char *)(DAT_000bdca0 + 0xbdb3a);
  iVar11 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::HasMember(pGVar2,pcVar12);
  if (iVar11 != 0) {
    pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](pGVar2,pcVar12);
    iVar11 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::operator[](pGVar3,(char *)(DAT_000bdca4 + 0xbdb50));
    if (*(int *)(iVar11 + 0xc) << 0x17 < 0) {
      iVar11 = *unaff_r5;
      pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar2,pcVar12);
      puVar4 = (undefined4 *)
               rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::operator[](pGVar3,(char *)(DAT_000bdca8 + 0xbdb68));
      *(undefined4 *)(iVar11 + 0x28) = *puVar4;
    }
  }
  pcVar12 = (char *)(DAT_000bdcac + 0xbdb76);
  iVar11 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::HasMember(pGVar2,pcVar12);
  if (iVar11 != 0) {
    pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](pGVar2,pcVar12);
    iVar11 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::operator[](pGVar3,(char *)(DAT_000bdcb0 + 0xbdb8c));
    if (*(int *)(iVar11 + 0xc) << 0x17 < 0) {
      iVar11 = *unaff_r5;
      pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar2,pcVar12);
      puVar4 = (undefined4 *)
               rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::operator[](pGVar3,(char *)(DAT_000bdcb4 + 0xbdba4));
      *(undefined4 *)(iVar11 + 0x2c) = *puVar4;
    }
  }
  pcVar12 = (char *)(DAT_000bdcb8 + 0xbdbb2);
  iVar11 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::HasMember(pGVar2,pcVar12);
  if (iVar11 == 0) {
LAB_000be2c4:
    *(undefined4 *)(*unaff_r5 + 0x38) = DAT_000be330;
  }
  else {
    pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](pGVar2,pcVar12);
    iVar11 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::operator[](pGVar3,(char *)(DAT_000bdcbc + 0xbdbca));
    if (-1 < *(int *)(iVar11 + 0xc) << 0x17) goto LAB_000be2c4;
    iVar11 = *unaff_r5;
    pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](pGVar2,pcVar12);
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[](pGVar3,(char *)(DAT_000bdcc0 + 0xbdbe4));
    uVar15 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::GetDouble();
    __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_000bdc68,DAT_000bdc6c);
    uVar8 = __truncdfsf2();
    *(undefined4 *)(iVar11 + 0x38) = uVar8;
  }
  pcVar12 = (char *)(DAT_000bdcc4 + 0xbdc00);
  iVar11 = rapidjson::
           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::HasMember(pGVar2,pcVar12);
  if (iVar11 != 0) {
    pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](pGVar2,pcVar12);
    iVar11 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::operator[](pGVar3,(char *)(DAT_000bdcc8 + 0xbdc18));
    if (*(int *)(iVar11 + 0xc) << 0x17 < 0) {
      iVar11 = *unaff_r5;
      pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar2,pcVar12);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar2,(char *)(DAT_000bdccc + 0xbdc32));
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      GetDouble();
      uVar8 = __truncdfsf2();
      *(undefined4 *)(iVar11 + 0x3c) = uVar8;
      goto LAB_000bdc3e;
    }
  }
  *(undefined4 *)(*unaff_r5 + 0x3c) = DAT_000be330;
LAB_000bdc3e:
  if (*unaff_r5 != 0) {
    uVar9 = 0;
    iVar11 = rapidjson::
             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                           *)(*param_11 + *param_12 * 0x10),(char *)(DAT_000bdcd0 + 0xbdc54));
    if (*(int *)(iVar11 + 4) == 0) {
      uVar8 = __floatsisf(param_8);
      iVar1 = *unaff_r5;
      uVar6 = *(undefined4 *)(iVar1 + 0x10);
      iVar11 = __aeabi_fcmplt(uVar6,uVar8);
      if (iVar11 != 0) {
        param_8 = __fixsfsi(uVar6);
      }
      uVar8 = __floatsisf(*(undefined4 *)(iVar1 + 0x28));
      uVar8 = __addsf3(uVar6,uVar8);
      uVar6 = __floatsisf(in_stack_00000020);
      iVar11 = __aeabi_fcmpgt(uVar8,uVar6);
      if (iVar11 != 0) {
        in_stack_00000020 = __fixsfsi(uVar8);
      }
      uVar8 = __floatsisf(param_9);
      uVar6 = *(undefined4 *)(iVar1 + 0x14);
      iVar11 = __aeabi_fcmplt(uVar6,uVar8);
      if (iVar11 != 0) {
        param_9 = __fixsfsi(uVar6);
      }
      uVar8 = __floatsisf(*(undefined4 *)(iVar1 + 0x2c));
      uVar7 = __addsf3(uVar6,uVar8);
      uVar8 = __floatsisf(in_stack_00000024);
      iVar11 = __aeabi_fcmpgt(uVar7,uVar8);
      uVar8 = extraout_s0_01;
      uVar6 = extraout_s1_01;
      if (iVar11 != 0) {
        in_stack_00000024 = __fixsfsi(uVar7);
        uVar8 = extraout_s0_02;
        uVar6 = extraout_s1_02;
      }
      uVar15 = CONCAT44(uVar6,uVar8);
      iVar11 = 0;
      do {
        iVar10 = iVar11 * 0x1c;
        *(undefined4 *)(*unaff_r5 + iVar10 + 0x4c) = DAT_000be330;
        iVar1 = *unaff_r5;
        uVar15 = cocos2d::CCPoint::CCPoint
                           ((CCPoint *)&stack0x00000084,(float)uVar15,
                            (float)((ulonglong)uVar15 >> 0x20));
        *(undefined4 *)(iVar1 + iVar10 + 0x50) = in_stack_00000084;
        *(undefined4 *)(iVar1 + iVar10 + 0x54) = in_stack_00000088;
        iVar1 = *unaff_r5;
        uVar15 = cocos2d::CCSize::CCSize
                           ((CCSize *)&stack0x0000008c,(float)uVar15,
                            (float)((ulonglong)uVar15 >> 0x20));
        uVar8 = DAT_000be330;
        *(undefined4 *)(iVar1 + iVar10 + 0x58) = in_stack_0000008c;
        iVar11 = iVar11 + 1;
        *(undefined4 *)(iVar1 + iVar10 + 0x5c) = in_stack_00000090;
        *(undefined4 *)(*unaff_r5 + iVar10 + 100) = uVar8;
        *(undefined4 *)(*unaff_r5 + iVar10 + 0x60) = uVar8;
      } while (iVar11 != 0x50);
    }
    else {
      while( true ) {
        pcVar12 = (char *)(DAT_000be0b8 + 0xbe052);
        iVar11 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                               *)(*param_11 + *param_12 * 0x10),pcVar12);
        if (*(uint *)(iVar11 + 4) <= uVar9) break;
        piVar5 = (int *)rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                      *)(*param_11 + *param_12 * 0x10),pcVar12);
        iVar11 = DAT_000be070;
        pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  *)rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                  *)(*piVar5 + *(int *)(uVar9 * 4 + DAT_000be068 + 0xbdcf0) * 0x10),
                                 (char *)(DAT_000be06c + 0xbdcfa));
        pcVar12 = (char *)(iVar11 + 0xbdd02);
        iVar11 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar12);
        if (iVar11 == 0) {
LAB_000be2d4:
          *(undefined4 *)(*unaff_r5 + uVar9 * 0x1c + 0x4c) = _DAT_000be334;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          iVar11 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be074 + 0xbdd1c));
          if (-1 < *(int *)(iVar11 + 0xc) << 0x17) goto LAB_000be2d4;
          iVar11 = *unaff_r5;
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be078 + 0xbdd3c));
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::GetDouble();
          uVar8 = __truncdfsf2();
          *(undefined4 *)(iVar11 + uVar9 * 0x1c + 0x4c) = uVar8;
        }
        uVar8 = *(undefined4 *)(*unaff_r5 + uVar9 * 0x1c + 0x4c);
        iVar11 = __aeabi_fcmplt(in_stack_0000003c,uVar8);
        if (iVar11 != 0) {
          *(int *)(param_7 + 0x290) = param_10;
          *(undefined4 *)(param_7 + 0x294) = uVar8;
          in_stack_0000003c = uVar8;
        }
        pcVar12 = (char *)(DAT_000be07c + 0xbdd7c);
        iVar11 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar12);
        if (iVar11 == 0) {
LAB_000be2e2:
          uVar8 = DAT_000be330;
          *(undefined4 *)(*unaff_r5 + uVar9 * 0x1c + 0x50) = DAT_000be330;
          *(undefined4 *)(*unaff_r5 + uVar9 * 0x1c + 0x54) = uVar8;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          iVar11 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be080 + 0xbdd94));
          if (-1 < *(int *)(iVar11 + 0xc) << 0x17) goto LAB_000be2e2;
          iVar11 = *unaff_r5;
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be084 + 0xbddb0));
          uVar15 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be088 + 0xbddc8));
          uVar16 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          uVar15 = __truncdfsf2((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x0000006c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
          iVar11 = iVar11 + uVar9 * 0x1c;
          *(undefined4 *)(iVar11 + 0x50) = in_stack_0000006c;
          *(undefined4 *)(iVar11 + 0x54) = in_stack_00000070;
        }
        pcVar12 = (char *)(DAT_000be08c + 0xbde06);
        iVar11 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar12);
        fVar13 = extraout_s0;
        fVar14 = extraout_s1;
        if (iVar11 == 0) {
LAB_000be2f6:
          iVar11 = *unaff_r5;
          cocos2d::CCSize::CCSize((CCSize *)&stack0x0000007c,fVar13,fVar14);
          iVar11 = iVar11 + uVar9 * 0x1c;
          *(undefined4 *)(iVar11 + 0x58) = in_stack_0000007c;
          *(undefined4 *)(iVar11 + 0x5c) = in_stack_00000080;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          iVar11 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be090 + 0xbde1e));
          fVar13 = extraout_s0_00;
          fVar14 = extraout_s1_00;
          if (-1 < *(int *)(iVar11 + 0xc) << 0x17) goto LAB_000be2f6;
          iVar11 = *unaff_r5;
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be094 + 0xbde3a));
          uVar15 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be098 + 0xbde52));
          uVar16 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          uVar15 = __truncdfsf2((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          cocos2d::CCSize::CCSize
                    ((CCSize *)&stack0x00000074,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
          iVar11 = iVar11 + uVar9 * 0x1c;
          *(undefined4 *)(iVar11 + 0x58) = in_stack_00000074;
          *(undefined4 *)(iVar11 + 0x5c) = in_stack_00000078;
        }
        pcVar12 = (char *)(DAT_000be09c + 0xbde90);
        iVar11 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar12);
        if (iVar11 == 0) {
LAB_000be312:
          *(undefined4 *)(*unaff_r5 + uVar9 * 0x1c + 0x60) = DAT_000be330;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          iVar11 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be0a0 + 0xbdea8));
          if (-1 < *(int *)(iVar11 + 0xc) << 0x17) goto LAB_000be312;
          iVar11 = *unaff_r5;
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar3,(char *)(DAT_000be0a4 + 0xbdec8));
          uVar15 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::GetDouble();
          __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_000be060,DAT_000be064);
          uVar8 = __truncdfsf2();
          *(undefined4 *)(iVar11 + uVar9 * 0x1c + 0x60) = uVar8;
        }
        pcVar12 = (char *)(DAT_000be0a8 + 0xbdee8);
        iVar11 = rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::HasMember(pGVar2,pcVar12);
        if (iVar11 == 0) {
LAB_000be320:
          *(undefined4 *)(*unaff_r5 + uVar9 * 0x1c + 100) = DAT_000be330;
        }
        else {
          pGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          iVar11 = rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar3,(char *)(DAT_000be0ac + 0xbdf00));
          if (-1 < *(int *)(iVar11 + 0xc) << 0x17) goto LAB_000be320;
          iVar11 = *unaff_r5;
          pGVar2 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    *)rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::operator[](pGVar2,pcVar12);
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](pGVar2,(char *)(DAT_000be0b0 + 0xbdf20));
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::GetDouble();
          uVar8 = __truncdfsf2();
          *(undefined4 *)(iVar11 + uVar9 * 0x1c + 100) = uVar8;
        }
        iVar1 = *unaff_r5;
        uVar8 = *(undefined4 *)(iVar1 + uVar9 * 0x1c + 0x50);
        iVar11 = __aeabi_fcmpeq(uVar8,DAT_000be0b4);
        if ((iVar11 == 0) && (iVar11 = __aeabi_fcmpeq(uVar8,0), iVar11 == 0)) {
          uVar8 = __addsf3(uVar8,*(undefined4 *)(iVar1 + 0x10));
          uVar6 = __floatsisf(param_8);
          iVar11 = __aeabi_fcmplt(uVar8,uVar6);
          if (iVar11 != 0) {
            param_8 = __fixsfsi(uVar8);
          }
          uVar6 = __floatsisf(*(undefined4 *)(iVar1 + 0x28));
          uVar8 = __addsf3(uVar8,uVar6);
          uVar6 = __floatsisf(in_stack_00000020);
          iVar11 = __aeabi_fcmpgt(uVar8,uVar6);
          if (iVar11 != 0) {
            in_stack_00000020 = __fixsfsi(uVar8);
          }
          uVar8 = __addsf3(*(undefined4 *)(iVar1 + 0x14),
                           *(undefined4 *)(iVar1 + uVar9 * 0x1c + 0x54));
        }
        else {
          uVar8 = __floatsisf(param_8);
          uVar6 = *(undefined4 *)(iVar1 + 0x10);
          iVar11 = __aeabi_fcmplt(uVar6,uVar8);
          if (iVar11 != 0) {
            param_8 = __fixsfsi(uVar6);
          }
          uVar8 = __floatsisf(*(undefined4 *)(iVar1 + 0x28));
          uVar8 = __addsf3(uVar6,uVar8);
          uVar6 = __floatsisf(in_stack_00000020);
          iVar11 = __aeabi_fcmpgt(uVar8,uVar6);
          if (iVar11 != 0) {
            in_stack_00000020 = __fixsfsi(uVar8);
          }
          uVar8 = *(undefined4 *)(iVar1 + 0x14);
        }
        uVar6 = __floatsisf(param_9);
        iVar11 = __aeabi_fcmplt(uVar8,uVar6);
        if (iVar11 != 0) {
          param_9 = __fixsfsi(uVar8);
        }
        uVar6 = __floatsisf(*(undefined4 *)(iVar1 + 0x2c));
        uVar8 = __addsf3(uVar8,uVar6);
        uVar6 = __floatsisf(in_stack_00000024);
        iVar11 = __aeabi_fcmpgt(uVar8,uVar6);
        if (iVar11 != 0) {
          in_stack_00000024 = __fixsfsi(uVar8);
        }
        uVar9 = uVar9 + 1;
      }
    }
  }
  uVar9 = param_11[1];
  if (param_10 + 1U < uVar9) {
    FUN_000bd9d8();
  }
  iVar1 = 0;
  iVar11 = uVar9 * 4;
  for (; (int)uVar9 < 0x50; uVar9 = uVar9 + 1) {
    *(undefined4 *)(param_7 + iVar11 + iVar1) = 0;
    iVar1 = iVar1 + 4;
  }
  iVar11 = 0;
  do {
    iVar1 = param_7 + iVar11;
    iVar11 = iVar11 + 4;
    *(undefined4 *)(iVar1 + 0x140) = 0;
  } while (iVar11 != 0x140);
  __floatsisf((in_stack_00000020 - param_8) / 2);
  uVar15 = __floatsisf((in_stack_00000024 - param_9) / 2);
  cocos2d::CCSize::CCSize
            ((CCSize *)&stack0x00000094,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  __floatsisf(param_8 / 2);
  uVar15 = __floatsisf(param_9 / 2);
  cocos2d::CCSize::CCSize
            ((CCSize *)&stack0x0000009c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
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


