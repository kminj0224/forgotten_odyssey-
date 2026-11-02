/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000be338  Symbol: anim_Lode */

/* anim_Lode(char const*, _KG_Anit*, char const*, _KG_Anit*) */

undefined4 anim_Lode(char *param_1,_KG_Anit *param_2,char *param_3,_KG_Anit *param_4)

{
  char *pcVar1;
  int *__src;
  void *__s;
  GenericDocument *pGVar2;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  **ppGVar3;
  _KG_Animation *this;
  int *piVar4;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  _KG_Animation **pp_Var10;
  undefined4 uVar11;
  int iVar12;
  int *__n;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar13;
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
  uint uStack_e4;
  int iStack_e0;
  char *local_d8;
  _KG_Anit *local_d4;
  uint uStack_d0;
  int iStack_cc;
  int iStack_c8;
  int *piStack_c0;
  char *pcStack_bc;
  undefined4 uStack_a8;
  int *piStack_a4;
  undefined auStack_a0 [4];
  int iStack_9c;
  undefined auStack_98 [4];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int *piStack_50;
  int *piStack_4c;
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  aGStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_3c;
  Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> aSStack_38 [24];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar8 = 0;
  do {
    iVar12 = iVar8 + 0x140;
    iVar8 = iVar8 + 4;
    *(undefined4 *)(param_2 + iVar12) = 0;
  } while (iVar8 != 0xf0);
  pGVar13 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             *)(DAT_000be4f4 + 0xbe35c);
  uStack_3c = 0;
  rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Stack
            (aSStack_38,(MemoryPoolAllocator *)0x0,0x400);
  uStack_20 = 0;
  uStack_1c = 0;
  pcVar1 = (char *)cocos2d::CCFileUtils::fullPathFromRelativePath(param_1);
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  iStack_54 = *(int *)(DAT_000be4f8 + 0xbe37e) + 8;
  __src = (int *)cocos2d::CCFileUtils::getFileData(pcVar1,(char *)pGVar13,(ulong *)&piStack_4c);
  __n = piStack_4c;
  piStack_50 = __src;
  if (piStack_4c == (int *)0x0) {
    cocos2d::CCFileData::~CCFileData((CCFileData *)&iStack_54);
    rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
              (aSStack_38);
    return 0;
  }
  __s = malloc((size_t)piStack_4c);
  memset(__s,0,(size_t)__n);
  memcpy(__s,__src,(size_t)__n);
  FUN_001eed40(&iStack_9c,__s,auStack_a0);
  FUN_001eebe0(auStack_98,&iStack_9c,0,__n);
  FUN_001ee874(&iStack_9c,auStack_98);
  FUN_001ed6b8(auStack_98);
  if (iStack_9c != 0) {
    iStack_5c = iStack_9c;
    iStack_58 = iStack_9c;
    pGVar2 = rapidjson::
             GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             ::
             ParseStream<2u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                       (aGStack_48,(GenericStringStream *)&iStack_5c);
    uStack_e4 = *(uint *)(pGVar2 + 0x28);
    if (uStack_e4 == 0) {
      ppGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 **)rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                  *)aGStack_48,(char *)(DAT_000be4fc + 0xbe408));
      pGVar13 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 *)rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](*ppGVar3,(char *)(DAT_000be500 + 0xbe412));
      __src = (int *)rapidjson::
                     GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                     ::operator[](pGVar13,(char *)(DAT_000be504 + 0xbe41a));
      cocos2d::CCSize::CCSize((CCSize *)&uStack_94);
      pp_Var10 = (_KG_Animation **)param_2;
      for (uVar9 = 0; uVar9 < (uint)__src[1]; uVar9 = uVar9 + 1) {
        this = (_KG_Animation *)operator_new(DAT_000be508);
        _KG_Animation::_KG_Animation(this);
        *pp_Var10 = this;
        pp_Var10 = pp_Var10 + 1;
      }
      uStack_d0 = 0;
      uStack_a8 = 0;
      iStack_c8 = 0;
      local_d4 = (_KG_Anit *)0x0;
      iStack_cc = 0;
      local_d8 = (char *)0x0;
      piStack_c0 = (int *)(DAT_000be50c + 0xbe4a4);
      pcStack_bc = (char *)(DAT_000be510 + 0xbe464);
      __n = (int *)param_2;
      goto LAB_000bea12;
    }
  }
  FUN_001edf58(&iStack_9c);
  free(__s);
  uStack_44 = 0;
  FUN_001ed6b8(&iStack_9c);
  cocos2d::CCFileData::~CCFileData((CCFileData *)&iStack_54);
  rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
            (aSStack_38);
  FUN_000be35a();
  local_d8 = param_1;
  local_d4 = param_4;
LAB_000beb16:
  *(undefined4 *)(*__n + uStack_e4 * 0x1c + 0x4c) = DAT_000beb84;
  do {
    uVar11 = *(undefined4 *)(*__n + uStack_e4 * 0x1c + 0x4c);
    iVar8 = __aeabi_fcmplt(uStack_a8,uVar11);
    if (iVar8 != 0) {
      *(uint *)(param_2 + 0x290) = uStack_d0;
      *(undefined4 *)(param_2 + 0x294) = uVar11;
      uStack_a8 = uVar11;
    }
    pcVar1 = (char *)(DAT_000be8b4 + 0xbe5c2);
    iVar8 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(pGVar13,pcVar1);
    if (iVar8 == 0) {
LAB_000beb26:
      uVar11 = DAT_000beb80;
      *(undefined4 *)(*__n + uStack_e4 * 0x1c + 0x50) = DAT_000beb80;
      *(undefined4 *)(*__n + uStack_e4 * 0x1c + 0x54) = uVar11;
    }
    else {
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar13,pcVar1);
      iVar8 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar5,(char *)(DAT_000be8b8 + 0xbe5da));
      if (-1 < *(int *)(iVar8 + 0xc) << 0x17) goto LAB_000beb26;
      iVar8 = *__n;
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar13,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8bc + 0xbe5f6));
      uVar15 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar13,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8c0 + 0xbe60e));
      uVar17 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      uVar15 = __truncdfsf2((int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&uStack_8c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
      iVar8 = iVar8 + uStack_e4 * 0x1c;
      *(undefined4 *)(iVar8 + 0x50) = uStack_8c;
      *(undefined4 *)(iVar8 + 0x54) = uStack_88;
    }
    pcVar1 = (char *)(DAT_000be8c4 + 0xbe64e);
    iVar8 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(pGVar13,pcVar1);
    fVar14 = extraout_s0;
    fVar16 = extraout_s1;
    if (iVar8 == 0) {
LAB_000beb3c:
      iVar8 = *__n;
      cocos2d::CCSize::CCSize((CCSize *)&uStack_7c,fVar14,fVar16);
      iVar8 = iVar8 + uStack_e4 * 0x1c;
      *(undefined4 *)(iVar8 + 0x58) = uStack_7c;
      *(undefined4 *)(iVar8 + 0x5c) = uStack_78;
    }
    else {
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar13,pcVar1);
      iVar8 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar5,(char *)(DAT_000be8c8 + 0xbe666));
      fVar14 = extraout_s0_00;
      fVar16 = extraout_s1_00;
      if (-1 < *(int *)(iVar8 + 0xc) << 0x17) goto LAB_000beb3c;
      iVar8 = *__n;
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar13,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8cc + 0xbe682));
      uVar15 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar13,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8d0 + 0xbe69a));
      uVar17 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      __truncdfsf2((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      uVar15 = __truncdfsf2((int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      cocos2d::CCSize::CCSize((CCSize *)&uStack_84,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20))
      ;
      iVar8 = iVar8 + uStack_e4 * 0x1c;
      *(undefined4 *)(iVar8 + 0x58) = uStack_84;
      *(undefined4 *)(iVar8 + 0x5c) = uStack_80;
    }
    pcVar1 = (char *)(DAT_000be8d4 + 0xbe6da);
    iVar8 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(pGVar13,pcVar1);
    if (iVar8 == 0) {
LAB_000beb5a:
      *(undefined4 *)(*__n + uStack_e4 * 0x1c + 0x60) = DAT_000beb80;
    }
    else {
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar13,pcVar1);
      iVar8 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar5,(char *)(DAT_000be8d8 + 0xbe6f2));
      if (-1 < *(int *)(iVar8 + 0xc) << 0x17) goto LAB_000beb5a;
      iVar8 = *__n;
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar13,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar5,(char *)(DAT_000be8dc + 0xbe70e));
      uVar15 = rapidjson::
               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               ::GetDouble();
      __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_000be898,DAT_000be89c);
      uVar11 = __truncdfsf2();
      *(undefined4 *)(iVar8 + uStack_e4 * 0x1c + 0x60) = uVar11;
    }
    pcVar1 = (char *)(DAT_000be8e0 + 0xbe734);
    iVar8 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(pGVar13,pcVar1);
    if (iVar8 == 0) {
LAB_000beb6a:
      *(undefined4 *)(*__n + uStack_e4 * 0x1c + 100) = DAT_000beb80;
    }
    else {
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[](pGVar13,pcVar1);
      iVar8 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[](pGVar5,(char *)(DAT_000be8e4 + 0xbe74c));
      if (-1 < *(int *)(iVar8 + 0xc) << 0x17) goto LAB_000beb6a;
      iVar8 = *__n;
      pGVar13 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 *)rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::operator[](pGVar13,pcVar1);
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[](pGVar13,(char *)(DAT_000be8e8 + 0xbe76a));
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      GetDouble();
      uVar11 = __truncdfsf2();
      *(undefined4 *)(iVar8 + uStack_e4 * 0x1c + 100) = uVar11;
    }
    iVar12 = *__n;
    uVar11 = *(undefined4 *)(iVar12 + uStack_e4 * 0x1c + 0x50);
    iVar8 = __aeabi_fcmpeq(uVar11,DAT_000be8ec);
    if ((iVar8 == 0) && (iVar8 = __aeabi_fcmpeq(uVar11,0), iVar8 == 0)) {
      uVar11 = __addsf3(uVar11,*(undefined4 *)(iVar12 + 0x10));
      uVar6 = __floatsisf(local_d8);
      iVar8 = __aeabi_fcmplt(uVar11,uVar6);
      if (iVar8 != 0) {
        local_d8 = (char *)__fixsfsi(uVar11);
      }
      uVar6 = __floatsisf(*(undefined4 *)(iVar12 + 0x28));
      uVar11 = __addsf3(uVar11,uVar6);
      uVar6 = __floatsisf(iStack_cc);
      iVar8 = __aeabi_fcmpgt(uVar11,uVar6);
      if (iVar8 != 0) {
        iStack_cc = __fixsfsi(uVar11);
      }
      uVar11 = __addsf3(*(undefined4 *)(iVar12 + 0x14),
                        *(undefined4 *)(iVar12 + uStack_e4 * 0x1c + 0x54));
    }
    else {
      uVar11 = __floatsisf(local_d8);
      uVar6 = *(undefined4 *)(iVar12 + 0x10);
      iVar8 = __aeabi_fcmplt(uVar6,uVar11);
      if (iVar8 != 0) {
        local_d8 = (char *)__fixsfsi(uVar6);
      }
      uVar11 = __floatsisf(*(undefined4 *)(iVar12 + 0x28));
      uVar11 = __addsf3(uVar6,uVar11);
      uVar6 = __floatsisf(iStack_cc);
      iVar8 = __aeabi_fcmpgt(uVar11,uVar6);
      if (iVar8 != 0) {
        iStack_cc = __fixsfsi(uVar11);
      }
      uVar11 = *(undefined4 *)(iVar12 + 0x14);
    }
    uVar6 = __floatsisf(local_d4);
    iVar8 = __aeabi_fcmplt(uVar11,uVar6);
    if (iVar8 != 0) {
      local_d4 = (_KG_Anit *)__fixsfsi(uVar11);
    }
    uVar6 = __floatsisf(*(undefined4 *)(iVar12 + 0x2c));
    uVar11 = __addsf3(uVar11,uVar6);
    uVar6 = __floatsisf(iStack_c8);
    iVar8 = __aeabi_fcmpgt(uVar11,uVar6);
    if (iVar8 != 0) {
      iStack_c8 = __fixsfsi(uVar11);
    }
    uStack_e4 = uStack_e4 + 1;
    while( true ) {
      pcVar1 = (char *)(DAT_000beb7c + 0xbe900);
      iVar8 = rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            *)(*__src + *piStack_c0 * 0x10),pcVar1);
      param_4 = (_KG_Anit *)piStack_a4;
      if (uStack_e4 < *(uint *)(iVar8 + 4)) break;
      while( true ) {
        do {
          param_4 = (_KG_Anit *)((int)param_4 + 4);
          uStack_d0 = uStack_d0 + 1;
          piStack_c0 = piStack_c0 + 1;
          __n = __n + 1;
LAB_000bea12:
          uVar9 = __src[1];
          if (uVar9 <= uStack_d0) {
            iVar12 = 0;
            iVar8 = uVar9 * 4;
            for (; (int)uVar9 < 0x50; uVar9 = uVar9 + 1) {
              *(undefined4 *)(param_2 + iVar12 + iVar8) = 0;
              iVar12 = iVar12 + 4;
            }
            iVar8 = 0;
            do {
              iVar12 = iVar8 + 0x140;
              iVar8 = iVar8 + 4;
              *(undefined4 *)(param_2 + iVar12) = 0;
            } while (iVar8 != 0x140);
            __floatsisf((iStack_cc - (int)local_d8) / 2);
            uVar15 = __floatsisf((iStack_c8 - (int)local_d4) / 2);
            cocos2d::CCSize::CCSize
                      ((CCSize *)&uStack_64,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
            __floatsisf((int)local_d8 / 2);
            uVar15 = __floatsisf((int)local_d4 / 2);
            cocos2d::CCSize::CCSize
                      ((CCSize *)&iStack_5c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
            uVar11 = __fixsfsi(uStack_64);
            *(undefined4 *)(param_2 + 0x284) = uVar11;
            uVar11 = __fixsfsi(uStack_60);
            *(undefined4 *)(param_2 + 0x280) = uVar11;
            uVar11 = __fixsfsi(iStack_5c);
            *(undefined4 *)(param_2 + 0x288) = uVar11;
            uVar11 = __fixsfsi(iStack_58);
            *(undefined4 *)(param_2 + 0x28c) = uVar11;
            FUN_001edf58(&iStack_9c);
            free(__s);
            FUN_001ed6b8(&iStack_9c);
            cocos2d::CCFileData::~CCFileData((CCFileData *)&iStack_54);
            rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
            ~Stack(aSStack_38);
            return 1;
          }
          iVar12 = *__n;
          iVar8 = rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                *)(*__src + uStack_d0 * 0x10),pcStack_bc);
          *(undefined4 *)(iVar12 + 0x40) = *(undefined4 *)(iVar8 + 4);
          *(undefined4 *)(*__n + 4) = *(undefined4 *)(*(int *)param_4 + 4);
          FUN_001ee874(*__n,*(int *)param_4);
          iVar8 = *__n;
          *(undefined4 *)(iVar8 + 0x30) = uStack_94;
          *(undefined4 *)(iVar8 + 0x34) = uStack_90;
          iVar8 = *(int *)param_4;
          iVar12 = *__n;
          *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
          *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(iVar8 + 0x14);
          iVar8 = *(int *)param_4;
          iVar12 = *__n;
          *(undefined4 *)(iVar12 + 0x18) = *(undefined4 *)(iVar8 + 0x18);
          *(undefined4 *)(iVar12 + 0x1c) = *(undefined4 *)(iVar8 + 0x1c);
          *(undefined4 *)(*__n + 0x28) = *(undefined4 *)(*(int *)param_4 + 0x28);
          *(undefined4 *)(*__n + 0x2c) = *(undefined4 *)(*(int *)param_4 + 0x28);
          *(undefined4 *)(*__n + 0x38) = *(undefined4 *)(*(int *)param_4 + 0x38);
          *(undefined4 *)(*__n + 0x3c) = *(undefined4 *)(*(int *)param_4 + 0x3c);
        } while (*__n == 0);
        iVar8 = rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                              *)(*__src + *piStack_c0 * 0x10),pcStack_bc);
        uStack_e4 = 0;
        piStack_a4 = (int *)param_4;
        if (*(int *)(iVar8 + 4) != 0) break;
        iVar12 = *__n;
        uVar6 = *(undefined4 *)(iVar12 + 0x10);
        uVar11 = __floatsisf(local_d8);
        iVar8 = __aeabi_fcmplt(uVar6,uVar11);
        if (iVar8 != 0) {
          local_d8 = (char *)__fixsfsi(uVar6);
        }
        uVar11 = __floatsisf(*(undefined4 *)(iVar12 + 0x28));
        uVar11 = __addsf3(uVar6,uVar11);
        uVar6 = __floatsisf(iStack_cc);
        iVar8 = __aeabi_fcmpgt(uVar11,uVar6);
        if (iVar8 != 0) {
          iStack_cc = __fixsfsi(uVar11);
        }
        uVar6 = *(undefined4 *)(iVar12 + 0x14);
        uVar11 = __floatsisf(local_d4);
        iVar8 = __aeabi_fcmplt(uVar6,uVar11);
        if (iVar8 != 0) {
          local_d4 = (_KG_Anit *)__fixsfsi(uVar6);
        }
        uVar11 = __floatsisf(*(undefined4 *)(iVar12 + 0x2c));
        uVar7 = __addsf3(uVar6,uVar11);
        uVar11 = __floatsisf(iStack_c8);
        iVar8 = __aeabi_fcmpgt(uVar7,uVar11);
        uVar11 = extraout_s0_01;
        uVar6 = extraout_s1_01;
        if (iVar8 != 0) {
          iStack_c8 = __fixsfsi(uVar7);
          uVar11 = extraout_s0_02;
          uVar6 = extraout_s1_02;
        }
        uVar15 = CONCAT44(uVar6,uVar11);
        iStack_e0 = 0;
        do {
          iVar8 = iStack_e0 * 0x1c;
          *(undefined4 *)(*__n + iVar8 + 0x4c) = DAT_000beb80;
          iVar12 = *__n;
          uVar15 = cocos2d::CCPoint::CCPoint
                             ((CCPoint *)&uStack_74,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20)
                             );
          *(undefined4 *)(iVar12 + iVar8 + 0x50) = uStack_74;
          *(undefined4 *)(iVar12 + iVar8 + 0x54) = uStack_70;
          iVar12 = *__n;
          uVar15 = cocos2d::CCSize::CCSize
                             ((CCSize *)&uStack_6c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20))
          ;
          uVar11 = DAT_000beb80;
          *(undefined4 *)(iVar12 + iVar8 + 0x58) = uStack_6c;
          *(undefined4 *)(iVar12 + iVar8 + 0x5c) = uStack_68;
          *(undefined4 *)(*__n + iVar8 + 100) = uVar11;
          iStack_e0 = iStack_e0 + 1;
          *(undefined4 *)(*__n + iVar8 + 0x60) = uVar11;
        } while (iStack_e0 != 0x50);
      }
    }
    piVar4 = (int *)rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                  *)(*__src + *piStack_c0 * 0x10),pcVar1);
    iVar8 = DAT_000be8a8;
    pGVar13 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               *)rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                               *)(*piVar4 + *(int *)(uStack_e4 * 4 + DAT_000be8a0 + 0xbe572) * 0x10)
                              ,(char *)(DAT_000be8a4 + 0xbe53c));
    pcVar1 = (char *)(iVar8 + 0xbe544);
    iVar8 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::HasMember(pGVar13,pcVar1);
    if (iVar8 == 0) goto LAB_000beb16;
    pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](pGVar13,pcVar1);
    iVar8 = rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::operator[](pGVar5,(char *)(DAT_000be8ac + 0xbe55e));
    if (-1 < *(int *)(iVar8 + 0xc) << 0x17) goto LAB_000beb16;
    iVar8 = *__n;
    pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[](pGVar13,pcVar1);
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[](pGVar5,(char *)(DAT_000be8b0 + 0xbe57c));
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    GetDouble();
    uVar11 = __truncdfsf2();
    *(undefined4 *)(iVar8 + uStack_e4 * 0x1c + 0x4c) = uVar11;
  } while( true );
}


