/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015c7b4  Symbol: addSpriteFramesWithDictionary */

/* cocos2d::CCSpriteFrameCache::addSpriteFramesWithDictionary(cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>*, cocos2d::CCTexture2D*) */

void __thiscall
cocos2d::CCSpriteFrameCache::addSpriteFramesWithDictionary
          (CCSpriteFrameCache *this,CCMutableDictionary *param_1,CCTexture2D *param_2)

{
  basic_string bVar1;
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
  *this_00;
  char *pcVar2;
  int iVar3;
  char *__nptr;
  char *__nptr_00;
  char *__nptr_01;
  char *__nptr_02;
  char *__nptr_03;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  CCSpriteFrame *this_01;
  int *this_02;
  basic_string *pbVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  CCRect *pCVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  CCPoint *this_03;
  CCSize *this_04;
  CCMutableDictionary *local_e0;
  undefined auStack_94 [4];
  undefined auStack_90 [4];
  undefined auStack_8c [4];
  undefined auStack_88 [4];
  undefined auStack_84 [4];
  undefined auStack_80 [4];
  basic_string local_7c;
  undefined auStack_78 [4];
  basic_string bStack_74;
  CCPoint aCStack_70 [2];
  CCSize aCStack_68 [2];
  cocos2d local_60 [8];
  CCPoint aCStack_58 [2];
  CCSize aCStack_50 [2];
  CCRect aCStack_48 [4];
  CCRect local_38 [4];
  CCRect aCStack_28 [5];
  
  FUN_001eed40(auStack_84,DAT_0015cad8 + 0x15c7c2,auStack_94);
  local_e0 = (CCMutableDictionary *)
             CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
             ::objectForKey((basic_string *)param_1);
  FUN_001ed6b8(auStack_84);
  FUN_001eed40(auStack_80,DAT_0015cadc + 0x15c7e4,auStack_90);
  this_00 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
             *)CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
               ::objectForKey((basic_string *)param_1);
  FUN_001ed6b8(auStack_80);
  if (local_e0 != (CCMutableDictionary *)0x0) {
    pcVar2 = (char *)valueForKey(this,(char *)(DAT_0015cae0 + 0x15c806),local_e0);
    local_e0 = (CCMutableDictionary *)atoi(pcVar2);
  }
  if (*(int *)(this_00 + 0x28) != 0) {
    *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(this_00 + 0x20);
    this_00[0x2c] =
         (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
          )0x1;
  }
  FUN_001eed40(&local_7c,DAT_0015cae4 + 0x15c82c,auStack_8c);
  pcVar2 = (char *)(DAT_0015cae8 + 0x15c834);
  do {
    do {
      pbVar7 = (basic_string *)
               CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
               ::next(this_00,&local_7c);
      if (pbVar7 == (basic_string *)0x0) {
        FUN_001ed6b8(&local_7c);
        return;
      }
      iVar3 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
              ::objectForKey(*(basic_string **)(this + 0x14));
    } while (iVar3 != 0);
    if (local_e0 == (CCMutableDictionary *)0x0) {
      pcVar6 = (char *)valueForKey(this,(char *)(DAT_0015caec + 0x15c856),
                                   (CCMutableDictionary *)pbVar7);
      strtod(pcVar6,(char **)0x0);
      __nptr = (char *)valueForKey(this,(char *)(DAT_0015caf0 + 0x15c86c),
                                   (CCMutableDictionary *)pbVar7);
      strtod(__nptr,(char **)0x0);
      __nptr_00 = (char *)valueForKey(this,(char *)(DAT_0015caf4 + 0x15c882),
                                      (CCMutableDictionary *)pbVar7);
      strtod(__nptr_00,(char **)0x0);
      __nptr_01 = (char *)valueForKey(this,(char *)(DAT_0015caf8 + 0x15c898),
                                      (CCMutableDictionary *)pbVar7);
      strtod(__nptr_01,(char **)0x0);
      __nptr_02 = (char *)valueForKey(this,(char *)(DAT_0015cafc + 0x15c8ae),
                                      (CCMutableDictionary *)pbVar7);
      strtod(__nptr_02,(char **)0x0);
      __nptr_03 = (char *)valueForKey(this,(char *)(DAT_0015cb00 + 0x15c8c4),
                                      (CCMutableDictionary *)pbVar7);
      strtod(__nptr_03,(char **)0x0);
      pcVar4 = (char *)valueForKey(this,(char *)(DAT_0015cb04 + 0x15c8da),
                                   (CCMutableDictionary *)pbVar7);
      iVar3 = atoi(pcVar4);
      pcVar4 = (char *)valueForKey(this,(char *)(DAT_0015cb08 + 0x15c8ea),
                                   (CCMutableDictionary *)pbVar7);
      iVar5 = atoi(pcVar4);
      this_01 = (CCSpriteFrame *)operator_new(0x4c);
      memset(this_01,0,0x4c);
      CCSpriteFrame::CCSpriteFrame(this_01);
      __truncdfsf2(pcVar6,extraout_r1);
      __truncdfsf2(__nptr,extraout_r1_00);
      __truncdfsf2(__nptr_00,extraout_r1_01);
      uVar11 = __truncdfsf2(__nptr_01,extraout_r1_02);
      CCRect::CCRect((CCRect *)aCStack_48,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                     extraout_s2,extraout_s3);
      __truncdfsf2(__nptr_02,extraout_r1_03);
      uVar11 = __truncdfsf2(__nptr_03,extraout_r1_04);
      this_03 = aCStack_70;
      CCPoint::CCPoint((CCPoint *)this_03,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      this_04 = aCStack_68;
      __floatsisf(iVar3 + (iVar3 >> 0x1f) ^ iVar3 >> 0x1f);
      uVar11 = __floatsisf(iVar5 + (iVar5 >> 0x1f) ^ iVar5 >> 0x1f);
      CCSize::CCSize((CCSize *)this_04,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      pCVar8 = aCStack_48;
      bVar10 = false;
LAB_0015cba0:
      CCSpriteFrame::initWithTexture(this_01,param_2,pCVar8,bVar10,this_03,this_04);
    }
    else {
      if (local_e0 + -1 < (CCMutableDictionary *)0x2) {
        pcVar6 = (char *)valueForKey(this,(char *)(DAT_0015cb0c + 0x15c9a2),
                                     (CCMutableDictionary *)pbVar7);
        CCRectFromString((cocos2d *)local_38,pcVar6);
        bVar10 = false;
        if (local_e0 == (CCMutableDictionary *)0x2) {
          pcVar6 = (char *)valueForKey(this,(char *)(DAT_0015cb10 + 0x15c9be),
                                       (CCMutableDictionary *)pbVar7);
          iVar3 = atoi(pcVar6);
          bVar10 = iVar3 != 0;
        }
        pcVar6 = (char *)valueForKey(this,(char *)(DAT_0015cb14 + 0x15c9d6),
                                     (CCMutableDictionary *)pbVar7);
        this_03 = aCStack_58;
        CCPointFromString((cocos2d *)this_03,pcVar6);
        pcVar6 = (char *)valueForKey(this,(char *)(DAT_0015cb18 + 0x15c9ec),
                                     (CCMutableDictionary *)pbVar7);
        this_04 = aCStack_50;
        CCSizeFromString((cocos2d *)this_04,pcVar6);
        this_01 = (CCSpriteFrame *)operator_new(0x4c);
        memset(this_01,0,0x4c);
        CCSpriteFrame::CCSpriteFrame(this_01);
        pCVar8 = local_38;
        goto LAB_0015cba0;
      }
      if (local_e0 == (CCMutableDictionary *)0x3) {
        pcVar6 = (char *)valueForKey(this,pcVar2,(CCMutableDictionary *)pbVar7);
        CCSizeFromString(local_60,pcVar6);
        pcVar6 = (char *)valueForKey(this,(char *)(DAT_0015cb1c + 0x15ca40),
                                     (CCMutableDictionary *)pbVar7);
        CCPointFromString((cocos2d *)aCStack_58,pcVar6);
        pcVar6 = (char *)valueForKey(this,(char *)(DAT_0015cb20 + 0x15ca54),
                                     (CCMutableDictionary *)pbVar7);
        CCSizeFromString((cocos2d *)aCStack_50,pcVar6);
        pcVar6 = (char *)valueForKey(this,(char *)(DAT_0015cb24 + 0x15ca68),
                                     (CCMutableDictionary *)pbVar7);
        CCRectFromString((cocos2d *)local_38,pcVar6);
        pcVar6 = (char *)valueForKey(this,(char *)(DAT_0015cb28 + 0x15ca7c),
                                     (CCMutableDictionary *)pbVar7);
        iVar3 = atoi(pcVar6);
        bVar10 = iVar3 != 0;
        FUN_001eed40(auStack_78,DAT_0015cb2c + 0x15ca90,auStack_88);
        iVar3 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
                ::objectForKey(pbVar7);
        FUN_001ed6b8(auStack_78);
        bVar1 = local_7c;
        this_02 = (int *)operator_new(0x18);
        CCObject::CCObject((CCObject *)this_02);
        *this_02 = *(int *)(DAT_0015cb30 + 0x15cabe) + 8;
        this_02[5] = *(int *)(DAT_0015cb34 + 0x15caca) + 0xc;
        FUN_001ed9dc(this_02 + 5,bVar1);
        for (piVar9 = *(int **)(iVar3 + 0x14); piVar9 != *(int **)(iVar3 + 0x18);
            piVar9 = piVar9 + 1) {
          FUN_001ee80c(&bStack_74,*piVar9 + 0x14);
          pbVar7 = *(basic_string **)(this + 0x18);
          CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
          ::objectForKey(pbVar7);
          CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
          ::setObject((CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                       *)pbVar7,(CCString *)this_02,&bStack_74);
          FUN_001ed6b8(&bStack_74);
        }
        CCObject::release((CCObject *)this_02);
        this_01 = (CCSpriteFrame *)operator_new(0x4c);
        memset(this_01,0,0x4c);
        uVar11 = CCSpriteFrame::CCSpriteFrame(this_01);
        CCRect::CCRect((CCRect *)aCStack_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                       extraout_s2_00,extraout_s3_00);
        this_03 = aCStack_58;
        this_04 = aCStack_50;
        pCVar8 = aCStack_28;
        goto LAB_0015cba0;
      }
      this_01 = (CCSpriteFrame *)0x0;
    }
    CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
    ::setObject(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCSpriteFrame*>
                  **)(this + 0x14),this_01,&local_7c);
    CCObject::release((CCObject *)this_01);
  } while( true );
}


