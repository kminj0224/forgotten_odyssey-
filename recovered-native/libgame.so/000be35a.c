/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000be35a  Symbol: FUN_000be35a */

undefined4 FUN_000be35a(void)

{
  char *pcVar1;
  int *__src;
  void *__s;
  GenericDocument *pGVar2;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  **ppGVar3;
  int *piVar4;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  _KG_Animation **pp_Var10;
  _KG_Animation *p_Var11;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *unaff_r6;
  uint uVar12;
  undefined4 uVar13;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  float fVar14;
  float extraout_s1;
  float extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  uint param_6;
  int param_7;
  _KG_Animation **param_8;
  char *param_9;
  int *param_10;
  _KG_Animation *param_11;
  int param_12;
  int param_13;
  int *param_15;
  char *param_16;
  _KG_Animation *param_21;
  int *param_22;
  int param_23;
  undefined4 param_24;
  undefined4 param_25;
  undefined4 param_26;
  undefined4 param_27;
  undefined4 param_28;
  undefined4 param_29;
  undefined4 param_30;
  undefined4 param_31;
  undefined4 param_32;
  undefined4 param_33;
  undefined4 param_34;
  undefined4 param_35;
  undefined4 param_36;
  undefined4 param_37;
  int param_38;
  int param_39;
  int param_40;
  int *param_41;
  _KG_Animation **param_42;
  undefined4 param_43;
  undefined4 param_44;
  undefined4 param_45;
  undefined4 param_46;
  
  piVar4 = param_10;
  param_44 = 0;
  rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Stack
            ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&stack0x000000b0,
             (MemoryPoolAllocator *)0x0,0x400);
  param_45 = 0;
  param_46 = 0;
  pcVar1 = (char *)cocos2d::CCFileUtils::fullPathFromRelativePath(param_9);
  param_41 = (int *)0x0;
  param_42 = (_KG_Animation **)0x0;
  param_40 = *(int *)(DAT_000be4f8 + 0xbe37e) + 8;
  __src = (int *)cocos2d::CCFileUtils::getFileData
                           (pcVar1,(char *)unaff_r6,(ulong *)&stack0x0000009c);
  pp_Var10 = param_42;
  param_41 = __src;
  if (param_42 == (_KG_Animation **)0x0) {
    cocos2d::CCFileData::~CCFileData((CCFileData *)&stack0x00000094);
    rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
              ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&stack0x000000b0);
    return 0;
  }
  __s = malloc((size_t)param_42);
  memset(__s,0,(size_t)pp_Var10);
  memcpy(__s,__src,(size_t)pp_Var10);
  FUN_001eed40(&stack0x0000004c,__s,&stack0x00000048);
  FUN_001eebe0(&stack0x00000050,&stack0x0000004c,0,pp_Var10);
  FUN_001ee874(&stack0x0000004c,&stack0x00000050);
  FUN_001ed6b8(&stack0x00000050);
  if (param_23 != 0) {
    param_38 = param_23;
    param_39 = param_23;
    pGVar2 = rapidjson::
             GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::
             ParseStream<2u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                       ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                         *)&stack0x000000a0,(GenericStringStream *)&stack0x0000008c);
    param_6 = *(uint *)(pGVar2 + 0x28);
    if (param_6 == 0) {
      ppGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 **)rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                  *)&stack0x000000a0,(char *)(DAT_000be4fc + 0xbe408));
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](*ppGVar3,(char *)(DAT_000be500 + 0xbe412));
      __src = (int *)rapidjson::
                     GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                     ::operator[](pGVar5,(char *)(DAT_000be504 + 0xbe41a));
      cocos2d::CCSize::CCSize((CCSize *)&stack0x00000054);
      pp_Var10 = param_8;
      for (uVar12 = 0; uVar12 < (uint)__src[1]; uVar12 = uVar12 + 1) {
        p_Var11 = (_KG_Animation *)operator_new(DAT_000be508);
        _KG_Animation::_KG_Animation(p_Var11);
        *pp_Var10 = p_Var11;
        pp_Var10 = pp_Var10 + 1;
      }
      param_11 = (_KG_Animation *)0x0;
      param_21 = (_KG_Animation *)0x0;
      param_13 = 0;
      param_10 = (int *)0x0;
      param_12 = 0;
      param_9 = (char *)0x0;
      param_15 = (int *)(DAT_000be50c + 0xbe4a4);
      param_16 = (char *)(DAT_000be510 + 0xbe464);
      pp_Var10 = param_8;
      goto LAB_000bea12;
    }
  }
  FUN_001edf58(&stack0x0000004c);
  free(__s);
  param_43 = 0;
  FUN_001ed6b8(&stack0x0000004c);
  cocos2d::CCFileData::~CCFileData((CCFileData *)&stack0x00000094);
  rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
            ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&stack0x000000b0);
  FUN_000be35a();
LAB_000beb16:
  *(undefined4 *)(*pp_Var10 + param_6 * 0x1c + 0x4c) = DAT_000beb84;
  do {
    p_Var11 = *(_KG_Animation **)(*pp_Var10 + param_6 * 0x1c + 0x4c);
    iVar6 = __aeabi_fcmplt(param_21,p_Var11);
    if (iVar6 != 0) {
      param_8[0xa4] = param_11;
      param_8[0xa5] = p_Var11;
      param_21 = p_Var11;
    }
    pcVar1 = (char *)(DAT_000be8b4 + 0xbe5c2);
    iVar6 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(unaff_r6,pcVar1);
    if (iVar6 == 0) {
LAB_000beb26:
      uVar13 = DAT_000beb80;
      *(undefined4 *)(*pp_Var10 + param_6 * 0x1c + 0x50) = DAT_000beb80;
      *(undefined4 *)(*pp_Var10 + param_6 * 0x1c + 0x54) = uVar13;
    }
    else {
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      iVar6 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar5,(char *)(DAT_000be8b8 + 0xbe5da));
      if (-1 < *(int *)(iVar6 + 0xc) << 0x17) goto LAB_000beb26;
      p_Var11 = *pp_Var10;
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8bc + 0xbe5f6));
      uVar15 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8c0 + 0xbe60e));
      uVar17 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      uVar15 = __truncdfsf2((int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x0000005c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
      *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x50) = param_26;
      *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x54) = param_27;
    }
    pcVar1 = (char *)(DAT_000be8c4 + 0xbe64e);
    iVar6 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(unaff_r6,pcVar1);
    fVar14 = extraout_s0;
    fVar16 = extraout_s1;
    if (iVar6 == 0) {
LAB_000beb3c:
      p_Var11 = *pp_Var10;
      cocos2d::CCSize::CCSize((CCSize *)&stack0x0000006c,fVar14,fVar16);
      *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x58) = param_30;
      *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x5c) = param_31;
    }
    else {
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      iVar6 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar5,(char *)(DAT_000be8c8 + 0xbe666));
      fVar14 = extraout_s0_00;
      fVar16 = extraout_s1_00;
      if (-1 < *(int *)(iVar6 + 0xc) << 0x17) goto LAB_000beb3c;
      p_Var11 = *pp_Var10;
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8cc + 0xbe682));
      uVar15 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8d0 + 0xbe69a));
      uVar17 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      uVar15 = __truncdfsf2((int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      cocos2d::CCSize::CCSize
                ((CCSize *)&stack0x00000064,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
      *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x58) = param_28;
      *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x5c) = param_29;
    }
    pcVar1 = (char *)(DAT_000be8d4 + 0xbe6da);
    iVar6 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(unaff_r6,pcVar1);
    if (iVar6 == 0) {
LAB_000beb5a:
      *(undefined4 *)(*pp_Var10 + param_6 * 0x1c + 0x60) = DAT_000beb80;
    }
    else {
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      iVar6 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar5,(char *)(DAT_000be8d8 + 0xbe6f2));
      if (-1 < *(int *)(iVar6 + 0xc) << 0x17) goto LAB_000beb5a;
      p_Var11 = *pp_Var10;
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8dc + 0xbe70e));
      uVar15 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_000be898,DAT_000be89c);
      uVar13 = __truncdfsf2();
      *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x60) = uVar13;
    }
    pcVar1 = (char *)(DAT_000be8e0 + 0xbe734);
    iVar6 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(unaff_r6,pcVar1);
    if (iVar6 == 0) {
LAB_000beb6a:
      *(undefined4 *)(*pp_Var10 + param_6 * 0x1c + 100) = DAT_000beb80;
    }
    else {
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      iVar6 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar5,(char *)(DAT_000be8e4 + 0xbe74c));
      if (-1 < *(int *)(iVar6 + 0xc) << 0x17) goto LAB_000beb6a;
      p_Var11 = *pp_Var10;
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](unaff_r6,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8e8 + 0xbe76a));
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      GetDouble();
      uVar13 = __truncdfsf2();
      *(undefined4 *)(p_Var11 + param_6 * 0x1c + 100) = uVar13;
    }
    p_Var11 = *pp_Var10;
    uVar13 = *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x50);
    iVar6 = __aeabi_fcmpeq(uVar13,DAT_000be8ec);
    if ((iVar6 == 0) && (iVar6 = __aeabi_fcmpeq(uVar13,0), iVar6 == 0)) {
      uVar13 = __addsf3(uVar13,*(undefined4 *)(p_Var11 + 0x10));
      uVar7 = __floatsisf(param_9);
      iVar6 = __aeabi_fcmplt(uVar13,uVar7);
      if (iVar6 != 0) {
        param_9 = (char *)__fixsfsi(uVar13);
      }
      uVar7 = __floatsisf(*(undefined4 *)(p_Var11 + 0x28));
      uVar13 = __addsf3(uVar13,uVar7);
      uVar7 = __floatsisf(param_12);
      iVar6 = __aeabi_fcmpgt(uVar13,uVar7);
      if (iVar6 != 0) {
        param_12 = __fixsfsi(uVar13);
      }
      uVar13 = __addsf3(*(undefined4 *)(p_Var11 + 0x14),
                        *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x54));
    }
    else {
      uVar13 = __floatsisf(param_9);
      uVar7 = *(undefined4 *)(p_Var11 + 0x10);
      iVar6 = __aeabi_fcmplt(uVar7,uVar13);
      if (iVar6 != 0) {
        param_9 = (char *)__fixsfsi(uVar7);
      }
      uVar13 = __floatsisf(*(undefined4 *)(p_Var11 + 0x28));
      uVar13 = __addsf3(uVar7,uVar13);
      uVar7 = __floatsisf(param_12);
      iVar6 = __aeabi_fcmpgt(uVar13,uVar7);
      if (iVar6 != 0) {
        param_12 = __fixsfsi(uVar13);
      }
      uVar13 = *(undefined4 *)(p_Var11 + 0x14);
    }
    uVar7 = __floatsisf(param_10);
    iVar6 = __aeabi_fcmplt(uVar13,uVar7);
    if (iVar6 != 0) {
      param_10 = (int *)__fixsfsi(uVar13);
    }
    uVar7 = __floatsisf(*(undefined4 *)(p_Var11 + 0x2c));
    uVar13 = __addsf3(uVar13,uVar7);
    uVar7 = __floatsisf(param_13);
    iVar6 = __aeabi_fcmpgt(uVar13,uVar7);
    if (iVar6 != 0) {
      param_13 = __fixsfsi(uVar13);
    }
    param_6 = param_6 + 1;
    while( true ) {
      pcVar1 = (char *)(DAT_000beb7c + 0xbe900);
      iVar6 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            *)(*__src + *param_15 * 0x10),pcVar1);
      piVar4 = param_22;
      if (param_6 < *(uint *)(iVar6 + 4)) break;
      while( true ) {
        do {
          piVar4 = piVar4 + 1;
          param_11 = param_11 + 1;
          param_15 = param_15 + 1;
          pp_Var10 = pp_Var10 + 1;
LAB_000bea12:
          p_Var11 = (_KG_Animation *)__src[1];
          if (p_Var11 <= param_11) {
            iVar9 = 0;
            iVar6 = (int)p_Var11 * 4;
            for (; (int)p_Var11 < 0x50; p_Var11 = p_Var11 + 1) {
              *(undefined4 *)((int)param_8 + iVar9 + iVar6) = 0;
              iVar9 = iVar9 + 4;
            }
            iVar6 = 0;
            do {
              iVar9 = iVar6 + 0x140;
              iVar6 = iVar6 + 4;
              *(undefined4 *)((int)param_8 + iVar9) = 0;
            } while (iVar6 != 0x140);
            __floatsisf((param_12 - (int)param_9) / 2);
            uVar15 = __floatsisf((param_13 - (int)param_10) / 2);
            cocos2d::CCSize::CCSize
                      ((CCSize *)&stack0x00000084,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
            __floatsisf((int)param_9 / 2);
            uVar15 = __floatsisf((int)param_10 / 2);
            cocos2d::CCSize::CCSize
                      ((CCSize *)&stack0x0000008c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
            p_Var11 = (_KG_Animation *)__fixsfsi(param_36);
            param_8[0xa1] = p_Var11;
            p_Var11 = (_KG_Animation *)__fixsfsi(param_37);
            param_8[0xa0] = p_Var11;
            p_Var11 = (_KG_Animation *)__fixsfsi(param_38);
            param_8[0xa2] = p_Var11;
            p_Var11 = (_KG_Animation *)__fixsfsi(param_39);
            param_8[0xa3] = p_Var11;
            FUN_001edf58(&stack0x0000004c);
            free(__s);
            FUN_001ed6b8(&stack0x0000004c);
            cocos2d::CCFileData::~CCFileData((CCFileData *)&stack0x00000094);
            rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
            ~Stack((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)
                   &stack0x000000b0);
            return 1;
          }
          p_Var11 = *pp_Var10;
          iVar6 = rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                *)(*__src + (int)param_11 * 0x10),param_16);
          *(undefined4 *)(p_Var11 + 0x40) = *(undefined4 *)(iVar6 + 4);
          *(undefined4 *)(*pp_Var10 + 4) = *(undefined4 *)(*piVar4 + 4);
          FUN_001ee874(*pp_Var10,*piVar4);
          p_Var11 = *pp_Var10;
          *(undefined4 *)(p_Var11 + 0x30) = param_24;
          *(undefined4 *)(p_Var11 + 0x34) = param_25;
          iVar6 = *piVar4;
          p_Var11 = *pp_Var10;
          *(undefined4 *)(p_Var11 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
          *(undefined4 *)(p_Var11 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
          iVar6 = *piVar4;
          p_Var11 = *pp_Var10;
          *(undefined4 *)(p_Var11 + 0x18) = *(undefined4 *)(iVar6 + 0x18);
          *(undefined4 *)(p_Var11 + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
          *(undefined4 *)(*pp_Var10 + 0x28) = *(undefined4 *)(*piVar4 + 0x28);
          *(undefined4 *)(*pp_Var10 + 0x2c) = *(undefined4 *)(*piVar4 + 0x28);
          *(undefined4 *)(*pp_Var10 + 0x38) = *(undefined4 *)(*piVar4 + 0x38);
          *(undefined4 *)(*pp_Var10 + 0x3c) = *(undefined4 *)(*piVar4 + 0x3c);
        } while (*pp_Var10 == (_KG_Animation *)0x0);
        iVar6 = rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                              *)(*__src + *param_15 * 0x10),param_16);
        param_6 = 0;
        param_22 = piVar4;
        if (*(int *)(iVar6 + 4) != 0) break;
        p_Var11 = *pp_Var10;
        uVar7 = *(undefined4 *)(p_Var11 + 0x10);
        uVar13 = __floatsisf(param_9);
        iVar6 = __aeabi_fcmplt(uVar7,uVar13);
        if (iVar6 != 0) {
          param_9 = (char *)__fixsfsi(uVar7);
        }
        uVar13 = __floatsisf(*(undefined4 *)(p_Var11 + 0x28));
        uVar13 = __addsf3(uVar7,uVar13);
        uVar7 = __floatsisf(param_12);
        iVar6 = __aeabi_fcmpgt(uVar13,uVar7);
        if (iVar6 != 0) {
          param_12 = __fixsfsi(uVar13);
        }
        uVar7 = *(undefined4 *)(p_Var11 + 0x14);
        uVar13 = __floatsisf(param_10);
        iVar6 = __aeabi_fcmplt(uVar7,uVar13);
        if (iVar6 != 0) {
          param_10 = (int *)__fixsfsi(uVar7);
        }
        uVar13 = __floatsisf(*(undefined4 *)(p_Var11 + 0x2c));
        uVar8 = __addsf3(uVar7,uVar13);
        uVar13 = __floatsisf(param_13);
        iVar6 = __aeabi_fcmpgt(uVar8,uVar13);
        uVar13 = extraout_s0_01;
        uVar7 = extraout_s1_01;
        if (iVar6 != 0) {
          param_13 = __fixsfsi(uVar8);
          uVar13 = extraout_s0_02;
          uVar7 = extraout_s1_02;
        }
        uVar15 = CONCAT44(uVar7,uVar13);
        param_7 = 0;
        do {
          iVar6 = param_7 * 0x1c;
          *(undefined4 *)(*pp_Var10 + iVar6 + 0x4c) = DAT_000beb80;
          p_Var11 = *pp_Var10;
          uVar15 = cocos2d::CCPoint::CCPoint
                             ((CCPoint *)&stack0x00000074,(float)uVar15,
                              (float)((ulonglong)uVar15 >> 0x20));
          *(undefined4 *)(p_Var11 + iVar6 + 0x50) = param_32;
          *(undefined4 *)(p_Var11 + iVar6 + 0x54) = param_33;
          p_Var11 = *pp_Var10;
          uVar15 = cocos2d::CCSize::CCSize
                             ((CCSize *)&stack0x0000007c,(float)uVar15,
                              (float)((ulonglong)uVar15 >> 0x20));
          uVar13 = DAT_000beb80;
          *(undefined4 *)(p_Var11 + iVar6 + 0x58) = param_34;
          *(undefined4 *)(p_Var11 + iVar6 + 0x5c) = param_35;
          *(undefined4 *)(*pp_Var10 + iVar6 + 100) = uVar13;
          param_7 = param_7 + 1;
          *(undefined4 *)(*pp_Var10 + iVar6 + 0x60) = uVar13;
        } while (param_7 != 0x50);
      }
    }
    piVar4 = (int *)rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                  *)(*__src + *param_15 * 0x10),pcVar1);
    iVar6 = DAT_000be8a8;
    unaff_r6 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                *)(*piVar4 + *(int *)(param_6 * 4 + DAT_000be8a0 + 0xbe572) * 0x10),
                               (char *)(DAT_000be8a4 + 0xbe53c));
    pcVar1 = (char *)(iVar6 + 0xbe544);
    iVar6 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(unaff_r6,pcVar1);
    if (iVar6 == 0) goto LAB_000beb16;
    pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](unaff_r6,pcVar1);
    iVar6 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::operator[](pGVar5,(char *)(DAT_000be8ac + 0xbe55e));
    if (-1 < *(int *)(iVar6 + 0xc) << 0x17) goto LAB_000beb16;
    p_Var11 = *pp_Var10;
    pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](unaff_r6,pcVar1);
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[](pGVar5,(char *)(DAT_000be8b0 + 0xbe57c));
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    GetDouble();
    uVar13 = __truncdfsf2();
    *(undefined4 *)(p_Var11 + param_6 * 0x1c + 0x4c) = uVar13;
  } while( true );
}


