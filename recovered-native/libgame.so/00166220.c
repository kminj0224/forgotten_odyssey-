/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166220  Symbol: startElement */

/* cocos2d::CCTMXMapInfo::startElement(void*, char const*, char const**) */

void __thiscall
cocos2d::CCTMXMapInfo::startElement(CCTMXMapInfo *this,void *param_1,char *param_2,char **param_3)

{
  bool bVar1;
  CCTMXLayerInfo CVar2;
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
  *this_00;
  undefined4 uVar3;
  CCTMXTilesetInfo *this_01;
  char *pcVar4;
  int iVar5;
  CCMutableArray<cocos2d::CCTMXTilesetInfo*> *this_02;
  int iVar6;
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
  *pCVar7;
  CCTMXLayerInfo *this_03;
  CCMutableArray<cocos2d::CCTMXLayerInfo*> *this_04;
  int *piVar8;
  undefined4 *puVar9;
  CCMutableArray<cocos2d::CCTMXObjectGroup*> *this_05;
  uint uVar10;
  CCString *pCVar11;
  CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
  *this_06;
  CCObject *this_07;
  int iVar12;
  char **ppcVar13;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  code *pcVar17;
  int iVar18;
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
  *__s;
  int iVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined auStack_c4 [4];
  undefined auStack_c0 [4];
  undefined auStack_bc [4];
  undefined auStack_b8 [4];
  undefined auStack_b4 [4];
  undefined auStack_b0 [4];
  undefined auStack_ac [4];
  undefined auStack_a8 [4];
  undefined auStack_a4 [4];
  undefined auStack_a0 [4];
  undefined auStack_9c [4];
  undefined auStack_98 [4];
  undefined auStack_94 [4];
  undefined auStack_90 [4];
  undefined auStack_8c [4];
  undefined auStack_88 [4];
  undefined auStack_84 [4];
  basic_string bStack_80;
  char *pcStack_7c;
  char *local_78;
  undefined auStack_74 [4];
  undefined auStack_70 [4];
  undefined auStack_6c [4];
  undefined auStack_68 [4];
  pair apStack_64 [8];
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined4 local_50;
  char *local_4c;
  char local_48;
  undefined4 local_44;
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
  *local_40;
  char acStack_3c [32];
  int local_1c;
  
  piVar20 = *(int **)(DAT_00166564 + 0x16622c);
  local_1c = *piVar20;
  FUN_001eed40(&bStack_80,param_2,auStack_c4);
  this_00 = (_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
             *)operator_new(0x18);
  __s = this_00 + 4;
  memset(__s,0,0x10);
  *(undefined4 *)(this_00 + 0x14) = 0;
  *(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
    **)(this_00 + 0xc) = __s;
  *(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
    **)(this_00 + 0x10) = __s;
  if ((param_3 != (char **)0x0) && (*param_3 != (char *)0x0)) {
    for (; *param_3 != (char *)0x0; param_3 = param_3 + 2) {
      FUN_001eed40(&local_78,*param_3,auStack_c0);
      FUN_001eed40(&local_54,param_3[1],auStack_bc);
      FUN_001ee80c(auStack_74,&local_78);
      FUN_001ee80c(auStack_70,&local_54);
      FUN_001ee80c(auStack_6c,auStack_74);
      FUN_001ee80c(auStack_68,auStack_70);
      std::
      _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
      ::_M_insert_unique(apStack_64);
      FUN_001ed6b8(auStack_68);
      FUN_001ed6b8(auStack_6c);
      FUN_001ed6b8(auStack_70);
      FUN_001ed6b8(auStack_74);
      FUN_001ed6b8(&local_54);
      FUN_001ed6b8(&local_78);
    }
  }
  bVar1 = std::operator==(&bStack_80,(char *)(DAT_00166568 + 0x1662da));
  if (bVar1) {
    uVar3 = FUN_00165b40(DAT_0016656c + 0x1662ea,this_00);
    FUN_001eed40(&pcStack_7c,uVar3,auStack_b8);
    std::operator==((basic_string *)&pcStack_7c,(char *)(DAT_00166570 + 0x1662fe));
    uVar3 = FUN_00165b40(DAT_00166574 + 0x166308,this_00);
    FUN_001eed40(&local_78,uVar3,auStack_b4);
    bVar1 = std::operator==((basic_string *)&local_78,(char *)(DAT_00166578 + 0x16631c));
    if (bVar1) {
      uVar3 = 0;
      pcVar17 = *(code **)(*(int *)this + 0x18);
LAB_0016635a:
      (*pcVar17)(this,uVar3);
    }
    else {
      bVar1 = std::operator==((basic_string *)&local_78,(char *)(DAT_0016657c + 0x166334));
      if (bVar1) {
        uVar3 = 2;
        pcVar17 = *(code **)(*(int *)this + 0x18);
        goto LAB_0016635a;
      }
      bVar1 = std::operator==((basic_string *)&local_78,(char *)(DAT_00166580 + 0x16634c));
      if (bVar1) {
        uVar3 = 1;
        pcVar17 = *(code **)(*(int *)this + 0x18);
        goto LAB_0016635a;
      }
    }
    CCSize::CCSize((CCSize *)&local_54);
    pcVar4 = (char *)FUN_00165b40(DAT_00166584 + 0x16636a,this_00);
    strtod(pcVar4,(char **)0x0);
    local_54 = (char *)__truncdfsf2();
    pcVar4 = (char *)FUN_00165b40(DAT_00166588 + 0x166380,this_00);
    strtod(pcVar4,(char **)0x0);
    local_50 = __truncdfsf2();
    (**(code **)(*(int *)this + 0x20))(this,&local_54);
    pcVar4 = (char *)FUN_00165b40(DAT_0016658c + 0x1663a0,this_00);
    strtod(pcVar4,(char **)0x0);
    local_54 = (char *)__truncdfsf2();
    pcVar4 = (char *)FUN_00165b40(DAT_00166590 + 0x1663b6,this_00);
    strtod(pcVar4,(char **)0x0);
    local_50 = __truncdfsf2();
    (**(code **)(*(int *)this + 0x28))(this,&local_54);
    uVar3 = 1;
    pcVar17 = *(code **)(*(int *)this + 0x48);
LAB_001666fe:
    (*pcVar17)(this,uVar3);
    FUN_001ed6b8(&local_78);
    ppcVar13 = &pcStack_7c;
  }
  else {
    bVar1 = std::operator==(&bStack_80,(char *)(DAT_00166594 + 0x1663e0));
    if (!bVar1) {
      bVar1 = std::operator==(&bStack_80,(char *)(DAT_001665b8 + 0x1664ca));
      if (bVar1) {
        iVar6 = (**(code **)(*(int *)this + 0x34))(this);
        iVar5 = 0;
        if (*(int *)(iVar6 + 0x18) != *(int *)(iVar6 + 0x14)) {
          iVar5 = *(int *)(*(int *)(iVar6 + 0x18) + -4);
        }
        pCVar7 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                  *)operator_new(0x34);
        CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
        ::CCMutableDictionary(pCVar7);
        pcVar17 = *(code **)(*(int *)this + 0x50);
        iVar6 = *(int *)(iVar5 + 0x18);
        pcVar4 = (char *)FUN_00165b40(DAT_001665bc + 0x166500,this_00);
        iVar5 = atoi(pcVar4);
        (*pcVar17)(this,iVar5 + iVar6);
        getTileProperties(this);
        local_44 = (**(code **)(*(int *)this + 0x4c))(this);
        local_54 = (char *)0x0;
        local_50 = local_50 & 0xffffff00;
        local_40 = pCVar7;
        std::
        _Rb_tree<int,std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>,std::_Select1st<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>,std::less<int>,std::allocator<std::pair<int_const,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>>>
        ::_M_insert_unique((pair *)&local_4c);
        local_54 = local_4c;
        local_50 = CONCAT31(local_50._1_3_,local_48);
        if (local_48 != '\0') {
          CCObject::retain((CCObject *)pCVar7);
        }
        if (pCVar7 != (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                       *)0x0) {
          CCObject::release((CCObject *)pCVar7);
        }
        uVar3 = 5;
        pcVar17 = *(code **)(*(int *)this + 0x48);
LAB_001667c2:
        (*pcVar17)(this,uVar3);
        goto LAB_00166d6a;
      }
      bVar1 = std::operator==(&bStack_80,(char *)(DAT_001668c8 + 0x1665c8));
      if (!bVar1) {
        bVar1 = std::operator==(&bStack_80,(char *)(DAT_001668f0 + 0x166712));
        if (bVar1) {
          piVar8 = (int *)operator_new(0x28);
          CCTMXObjectGroup::CCTMXObjectGroup((CCTMXObjectGroup *)piVar8);
          uVar3 = FUN_00165b40(DAT_001668f4 + 0x16672c,this_00);
          FUN_001ed9dc(piVar8 + 9,uVar3);
          CCPoint::CCPoint((CCPoint *)&local_54);
          pcVar4 = (char *)FUN_00165b40(DAT_001668f8 + 0x166746,this_00);
          strtod(pcVar4,(char **)0x0);
          puVar9 = (undefined4 *)(**(code **)(*(int *)this + 0x24))(this);
          uVar3 = __truncdfsf2(pcVar4,extraout_r1_01);
          local_54 = (char *)__mulsf3(uVar3,*puVar9);
          pcVar4 = (char *)FUN_00165b40(DAT_001668fc + 0x166776,this_00);
          strtod(pcVar4,(char **)0x0);
          iVar5 = (**(code **)(*(int *)this + 0x24))(this);
          uVar3 = __truncdfsf2(pcVar4,extraout_r1_02);
          local_50 = __mulsf3(uVar3,*(undefined4 *)(iVar5 + 4));
          (**(code **)(*piVar8 + 0x18))(piVar8,&local_54);
          this_05 = (CCMutableArray<cocos2d::CCTMXObjectGroup*> *)
                    (**(code **)(*(int *)this + 0x3c))(this);
          CCMutableArray<cocos2d::CCTMXObjectGroup*>::addObject(this_05,(CCTMXObjectGroup *)piVar8);
          CCObject::release((CCObject *)piVar8);
          uVar3 = 3;
          pcVar17 = *(code **)(*(int *)this + 0x48);
          goto LAB_001667c2;
        }
        bVar1 = std::operator==(&bStack_80,(char *)(DAT_00166900 + 0x1667ce));
        if (bVar1) {
          iVar6 = (**(code **)(*(int *)this + 0x34))(this);
          iVar5 = 0;
          if (*(int *)(iVar6 + 0x18) != *(int *)(iVar6 + 0x14)) {
            iVar5 = *(int *)(*(int *)(iVar6 + 0x18) + -4);
          }
          uVar3 = FUN_00165b40(DAT_00166904 + 0x1667f0,this_00);
          FUN_001eed40(&local_54,uVar3,auStack_a4);
          uVar3 = CCFileUtils::fullPathFromRelativeFile(local_54,*(char **)(this + 0x4c));
          FUN_001ed9dc(iVar5 + 0x2c,uVar3);
        }
        else {
          bVar1 = std::operator==(&bStack_80,(char *)(DAT_00166908 + 0x166818));
          if (bVar1) {
            uVar3 = FUN_00165b40(DAT_0016690c + 0x166828,this_00);
            FUN_001eed40(&local_78,uVar3,auStack_a0);
            uVar3 = FUN_00165b40(DAT_00166910 + 0x16683c,this_00);
            FUN_001eed40(&local_54,uVar3,auStack_9c);
            bVar1 = std::operator==((basic_string *)&local_78,(char *)(DAT_00166914 + 0x166850));
            if (bVar1) {
              uVar10 = (**(code **)(*(int *)this + 0x54))(this);
              (**(code **)(*(int *)this + 0x58))(this,uVar10 | 2);
              (**(code **)(*(int *)this + 0x60))(this,1);
              bVar1 = std::operator==((basic_string *)&local_54,(char *)(DAT_00166918 + 0x16687c));
              if (bVar1) {
                uVar10 = (**(code **)(*(int *)this + 0x54))(this);
                iVar5 = *(int *)this;
                uVar14 = 4;
              }
              else {
                bVar1 = std::operator==((basic_string *)&local_54,(char *)(DAT_0016691c + 0x166898))
                ;
                if (!bVar1) goto LAB_001668b2;
                uVar10 = (**(code **)(*(int *)this + 0x54))(this);
                iVar5 = *(int *)this;
                uVar14 = 8;
              }
              (**(code **)(iVar5 + 0x58))(this,uVar14 | uVar10);
            }
LAB_001668b2:
            FUN_001ed6b8(&local_54);
            goto LAB_001668b8;
          }
          bVar1 = std::operator==(&bStack_80,(char *)(DAT_00166cb4 + 0x166928));
          if (bVar1) {
            iVar5 = (**(code **)(*(int *)this + 0x3c))(this);
            piVar8 = (int *)0x0;
            if (*(int *)(iVar5 + 0x18) != *(int *)(iVar5 + 0x14)) {
              piVar8 = *(int **)(*(int *)(iVar5 + 0x18) + -4);
            }
            pCVar7 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                      *)operator_new(0x34);
            iVar5 = DAT_00166cb8;
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::CCMutableDictionary(pCVar7);
            FUN_001eed40(&local_54,iVar5 + 0x166956,auStack_98);
            pcVar4 = (char *)FUN_00165b40(iVar5 + 0x166956,this_00);
            pCVar11 = (CCString *)operator_new(0x18);
            CCString::CCString(pCVar11,pcVar4);
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::setObject(pCVar7,pCVar11,(basic_string *)&local_54);
            iVar5 = DAT_00166cbc;
            CCObject::release((CCObject *)pCVar11);
            FUN_001ed9dc(&local_54,iVar5 + 0x16698c);
            pcVar4 = (char *)FUN_00165b40(iVar5 + 0x16698c,this_00);
            pCVar11 = (CCString *)operator_new(0x18);
            CCString::CCString(pCVar11,pcVar4);
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::setObject(pCVar7,pCVar11,(basic_string *)&local_54);
            iVar5 = DAT_00166cc0;
            CCObject::release((CCObject *)pCVar11);
            pcVar4 = (char *)FUN_00165b40(iVar5 + 0x1669c0,this_00);
            iVar6 = atoi(pcVar4);
            puVar9 = (undefined4 *)(**(code **)(*piVar8 + 0x14))(piVar8);
            iVar12 = __fixsfsi(*puVar9);
            FUN_001ed9dc(&local_54,iVar5 + 0x1669c0);
            pcVar15 = (char *)(DAT_00166cc4 + 0x1669f0);
            sprintf(acStack_3c,pcVar15,iVar6 + iVar12);
            pCVar11 = (CCString *)operator_new(0x18);
            CCString::CCString(pCVar11,acStack_3c);
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::setObject(pCVar7,pCVar11,(basic_string *)&local_54);
            CCObject::release((CCObject *)pCVar11);
            iVar18 = DAT_00166cc8 + 0x166a1e;
            pcVar4 = (char *)FUN_00165b40(iVar18,this_00);
            iVar5 = atoi(pcVar4);
            iVar6 = (**(code **)(*piVar8 + 0x14))(piVar8);
            iVar6 = __fixsfsi(*(undefined4 *)(iVar6 + 4));
            iVar12 = (**(code **)(*(int *)this + 0x1c))(this);
            uVar3 = *(undefined4 *)(iVar12 + 4);
            iVar12 = (**(code **)(*(int *)this + 0x24))(this);
            __mulsf3(uVar3,*(undefined4 *)(iVar12 + 4));
            iVar12 = __fixsfsi();
            iVar16 = DAT_00166ccc + 0x166a64;
            pcVar4 = (char *)FUN_00165b40(iVar16,this_00);
            iVar19 = atoi(pcVar4);
            FUN_001ed9dc(&local_54,iVar18);
            sprintf(acStack_3c,pcVar15,(iVar12 - (iVar5 + iVar6)) - iVar19);
            pCVar11 = (CCString *)operator_new(0x18);
            CCString::CCString(pCVar11,acStack_3c);
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::setObject(pCVar7,pCVar11,(basic_string *)&local_54);
            iVar5 = DAT_00166cd0;
            CCObject::release((CCObject *)pCVar11);
            FUN_001ed9dc(&local_54,iVar5 + 0x166aaa);
            pcVar4 = (char *)FUN_00165b40(iVar5 + 0x166aaa,this_00);
            pCVar11 = (CCString *)operator_new(0x18);
            CCString::CCString(pCVar11,pcVar4);
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::setObject(pCVar7,pCVar11,(basic_string *)&local_54);
            CCObject::release((CCObject *)pCVar11);
            FUN_001ed9dc(&local_54,iVar16);
            pcVar4 = (char *)FUN_00165b40(iVar16,this_00);
            pCVar11 = (CCString *)operator_new(0x18);
            CCString::CCString(pCVar11,pcVar4);
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::setObject(pCVar7,pCVar11,(basic_string *)&local_54);
            CCObject::release((CCObject *)pCVar11);
            this_06 = (CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
                       *)(**(code **)(*piVar8 + 0x24))(piVar8);
            CCMutableArray<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>*>
            ::addObject(this_06,(CCMutableDictionary *)pCVar7);
            CCObject::release((CCObject *)pCVar7);
            (**(code **)(*(int *)this + 0x48))(this,4);
            goto LAB_00166d64;
          }
          bVar1 = std::operator==(&bStack_80,(char *)(DAT_00166cd4 + 0x166b30));
          if ((!bVar1) || (iVar5 = (**(code **)(*(int *)this + 0x44))(this), iVar5 == 0))
          goto LAB_00166d6a;
          iVar5 = (**(code **)(*(int *)this + 0x44))(this);
          if (iVar5 == 1) {
            pcVar4 = (char *)FUN_00165b40(DAT_00166cd8 + 0x166b5a,this_00);
            this_07 = (CCObject *)operator_new(0x18);
            CCString::CCString((CCString *)this_07,pcVar4);
            uVar3 = FUN_00165b40(DAT_00166cdc + 0x166b74,this_00);
            FUN_001eed40(&local_54,uVar3,auStack_94);
            pCVar7 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                      *)(**(code **)(*(int *)this + 100))(this);
LAB_00166d56:
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::setObject(pCVar7,(CCString *)this_07,(basic_string *)&local_54);
          }
          else {
            iVar5 = (**(code **)(*(int *)this + 0x44))(this);
            if (iVar5 == 2) {
              iVar5 = (**(code **)(*(int *)this + 0x2c))(this);
              piVar8 = (int *)0x0;
              if (*(int *)(iVar5 + 0x18) != *(int *)(iVar5 + 0x14)) {
                piVar8 = *(int **)(*(int *)(iVar5 + 0x18) + -4);
              }
              pcVar4 = (char *)FUN_00165b40(DAT_00166ce0 + 0x166bb4,this_00);
              this_07 = (CCObject *)operator_new(0x18);
              CCString::CCString((CCString *)this_07,pcVar4);
              uVar3 = FUN_00165b40(DAT_00166ce4 + 0x166bce,this_00);
              FUN_001eed40(&local_54,uVar3,auStack_90);
              pcVar17 = *(code **)(*piVar8 + 0x14);
            }
            else {
              iVar5 = (**(code **)(*(int *)this + 0x44))(this);
              if (iVar5 != 3) {
                iVar5 = (**(code **)(*(int *)this + 0x44))(this);
                if (iVar5 == 4) {
                  iVar5 = (**(code **)(*(int *)this + 0x3c))(this);
                  piVar8 = (int *)0x0;
                  if (*(int *)(iVar5 + 0x18) != *(int *)(iVar5 + 0x14)) {
                    piVar8 = *(int **)(*(int *)(iVar5 + 0x18) + -4);
                  }
                  pCVar7 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                            *)0x0;
                  iVar5 = (**(code **)(*piVar8 + 0x24))();
                  if (*(int *)(iVar5 + 0x18) != *(int *)(iVar5 + 0x14)) {
                    pCVar7 = *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                               **)(*(int *)(iVar5 + 0x18) + -4);
                  }
                  uVar3 = FUN_00165b40(DAT_00166cf0 + 0x166c7e,this_00);
                  FUN_001eed40(&local_54,uVar3,auStack_88);
                  iVar5 = DAT_00166cf4 + 0x166c90;
                }
                else {
                  iVar5 = (**(code **)(*(int *)this + 0x44))(this);
                  if (iVar5 != 5) goto LAB_00166d6a;
                  iVar6 = getTileProperties(this);
                  iVar12 = (**(code **)(*(int *)this + 0x4c))(this);
                  iVar19 = iVar6 + 0x18;
                  iVar5 = iVar19;
                  iVar6 = *(int *)(iVar6 + 0x1c);
                  while (iVar6 != 0) {
                    if (*(int *)(iVar6 + 0x10) < iVar12) {
                      iVar6 = *(int *)(iVar6 + 0xc);
                    }
                    else {
                      iVar5 = iVar6;
                      iVar6 = *(int *)(iVar6 + 8);
                    }
                  }
                  if (iVar5 == iVar19) {
LAB_00166d24:
                    pCVar7 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                              *)0x0;
                  }
                  else {
                    if (iVar12 < *(int *)(iVar5 + 0x10)) {
                      iVar5 = iVar19;
                    }
                    if (iVar5 == iVar19) goto LAB_00166d24;
                    pCVar7 = *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                               **)(iVar5 + 0x14);
                  }
                  uVar3 = FUN_00165b40(DAT_00166da4 + 0x166d2e,this_00);
                  FUN_001eed40(&local_54,uVar3,auStack_84);
                  iVar5 = DAT_00166da8 + 0x166d40;
                }
                pcVar4 = (char *)FUN_00165b40(iVar5,this_00);
                this_07 = (CCObject *)operator_new(0x18);
                CCString::CCString((CCString *)this_07,pcVar4);
                goto LAB_00166d56;
              }
              iVar5 = (**(code **)(*(int *)this + 0x3c))(this);
              piVar8 = (int *)0x0;
              if (*(int *)(iVar5 + 0x18) != *(int *)(iVar5 + 0x14)) {
                piVar8 = *(int **)(*(int *)(iVar5 + 0x18) + -4);
              }
              pcVar4 = (char *)FUN_00165b40(DAT_00166ce8 + 0x166c08,this_00);
              this_07 = (CCObject *)operator_new(0x18);
              CCString::CCString((CCString *)this_07,pcVar4);
              uVar3 = FUN_00165b40(DAT_00166cec + 0x166c22,this_00);
              FUN_001eed40(&local_54,uVar3,auStack_8c);
              pcVar17 = *(code **)(*piVar8 + 0x1c);
            }
            pCVar7 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                      *)(*pcVar17)(piVar8);
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::setObject(pCVar7,(CCString *)this_07,(basic_string *)&local_54);
          }
          CCObject::release(this_07);
        }
LAB_00166d64:
        ppcVar13 = &local_54;
        goto LAB_00166d66;
      }
      this_03 = (CCTMXLayerInfo *)operator_new(0x3c);
      CCTMXLayerInfo::CCTMXLayerInfo(this_03);
      uVar3 = FUN_00165b40(DAT_001668cc + 0x1665e4,this_00);
      FUN_001ed9dc(this_03 + 0x18,uVar3);
      CCSize::CCSize((CCSize *)&local_54);
      pcVar4 = (char *)FUN_00165b40(DAT_001668d0 + 0x1665fe,this_00);
      strtod(pcVar4,(char **)0x0);
      local_54 = (char *)__truncdfsf2();
      pcVar4 = (char *)FUN_00165b40(DAT_001668d4 + 0x166614,this_00);
      strtod(pcVar4,(char **)0x0);
      local_50 = __truncdfsf2();
      iVar5 = DAT_001668d8;
      *(char **)(this_03 + 0x1c) = local_54;
      *(uint *)(this_03 + 0x20) = local_50;
      uVar3 = FUN_00165b40(iVar5 + 0x166630,this_00);
      FUN_001eed40(&pcStack_7c,uVar3,auStack_ac);
      bVar1 = std::operator==((basic_string *)&pcStack_7c,(char *)(DAT_001668dc + 0x166646));
      this_03[0x28] = (CCTMXLayerInfo)!bVar1;
      uVar3 = FUN_00165b40(DAT_001668e0 + 0x16665a,this_00);
      FUN_001eed40(&local_78,uVar3,auStack_a8);
      bVar1 = std::operator==((basic_string *)&local_78,(char *)(DAT_001668e4 + 0x16666e));
      if (bVar1) {
        this_03[0x29] = (CCTMXLayerInfo)0xff;
      }
      else {
        strtod(local_78,(char **)0x0);
        __muldf3();
        CVar2 = (CCTMXLayerInfo)__fixunsdfsi();
        this_03[0x29] = CVar2;
      }
      pcVar4 = (char *)FUN_00165b40(DAT_001668e8 + 0x16669e,this_00);
      strtod(pcVar4,(char **)0x0);
      pcVar15 = (char *)FUN_00165b40(DAT_001668ec + 0x1666b2,this_00);
      strtod(pcVar15,(char **)0x0);
      __truncdfsf2(pcVar4,extraout_r1);
      uVar21 = __truncdfsf2(pcVar15,extraout_r1_00);
      CCPoint::CCPoint((CCPoint *)&local_5c,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
      *(undefined4 *)(this_03 + 0x34) = local_5c;
      *(undefined4 *)(this_03 + 0x38) = local_58;
      this_04 = (CCMutableArray<cocos2d::CCTMXLayerInfo*> *)(**(code **)(*(int *)this + 0x2c))(this)
      ;
      CCMutableArray<cocos2d::CCTMXLayerInfo*>::addObject(this_04,this_03);
      CCObject::release((CCObject *)this_03);
      uVar3 = 2;
      pcVar17 = *(code **)(*(int *)this + 0x48);
      goto LAB_001666fe;
    }
    uVar3 = FUN_00165b40(DAT_00166598 + 0x1663ee,this_00);
    FUN_001eed40(&local_78,uVar3,auStack_b0);
    bVar1 = std::operator==((basic_string *)&local_78,(char *)(DAT_0016659c + 0x166402));
    if (bVar1) {
      this_01 = (CCTMXTilesetInfo *)operator_new(0x38);
      CCTMXTilesetInfo::CCTMXTilesetInfo(this_01);
      uVar3 = FUN_00165b40(DAT_001665a0 + 0x166436,this_00);
      FUN_001ed9dc(this_01 + 0x14,uVar3);
      pcVar4 = (char *)FUN_00165b40(DAT_001665a4 + 0x16644a,this_00);
      iVar5 = atoi(pcVar4);
      *(int *)(this_01 + 0x18) = iVar5;
      pcVar4 = (char *)FUN_00165b40(DAT_001665a8 + 0x16645a,this_00);
      iVar5 = atoi(pcVar4);
      *(int *)(this_01 + 0x24) = iVar5;
      pcVar4 = (char *)FUN_00165b40(DAT_001665ac + 0x16646a,this_00);
      iVar5 = atoi(pcVar4);
      *(int *)(this_01 + 0x28) = iVar5;
      CCSize::CCSize((CCSize *)&local_54);
      pcVar4 = (char *)FUN_00165b40(DAT_001665b0 + 0x166480,this_00);
      strtod(pcVar4,(char **)0x0);
      local_54 = (char *)__truncdfsf2();
      pcVar4 = (char *)FUN_00165b40(DAT_001665b4 + 0x166496,this_00);
      strtod(pcVar4,(char **)0x0);
      local_50 = __truncdfsf2();
      *(char **)(this_01 + 0x1c) = local_54;
      *(uint *)(this_01 + 0x20) = local_50;
      this_02 = (CCMutableArray<cocos2d::CCTMXTilesetInfo*> *)
                (**(code **)(*(int *)this + 0x34))(this);
      CCMutableArray<cocos2d::CCTMXTilesetInfo*>::addObject(this_02,this_01);
      CCObject::release((CCObject *)this_01);
    }
    else {
      uVar3 = CCFileUtils::fullPathFromRelativeFile(local_78,*(char **)(this + 0x4c));
      FUN_001ed9dc(&local_78,uVar3);
      parseXMLFile(this,local_78);
    }
LAB_001668b8:
    ppcVar13 = &local_78;
  }
LAB_00166d66:
  FUN_001ed6b8(ppcVar13);
LAB_00166d6a:
  std::
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
  ::_M_erase(this_00,*(_Rb_tree_node **)(this_00 + 8));
  *(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
    **)(this_00 + 0xc) = this_00 + 4;
  *(undefined4 *)(this_00 + 8) = 0;
  *(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
    **)(this_00 + 0x10) = this_00 + 4;
  *(undefined4 *)(this_00 + 0x14) = 0;
  std::
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
  ::_M_erase(this_00,(_Rb_tree_node *)0x0);
  operator_delete(this_00);
  FUN_001ed6b8(&bStack_80);
  if (local_1c == *piVar20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


