/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016475c  Symbol: initWithTilesetInfo */

/* cocos2d::CCTMXLayer::initWithTilesetInfo(cocos2d::CCTMXTilesetInfo*, cocos2d::CCTMXLayerInfo*,
   cocos2d::CCTMXMapInfo*) */

undefined4 __thiscall
cocos2d::CCTMXLayer::initWithTilesetInfo
          (CCTMXLayer *this,CCTMXTilesetInfo *param_1,CCTMXLayerInfo *param_2,CCTMXMapInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCTextureCache *this_00;
  CCTMXTilesetInfo *pCVar3;
  uint uVar4;
  int iVar5;
  CCDirector *this_01;
  undefined4 *puVar6;
  void *pvVar7;
  code *pcVar8;
  undefined8 uVar9;
  CCPoint aCStack_28 [2];
  CCSize aCStack_20 [12];
  
  uVar1 = __mulsf3(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  uVar2 = __mulsf3(uVar1,DAT_001648cc);
  uVar2 = __addsf3(uVar2,0x3f800000);
  pCVar3 = param_1;
  if (param_1 != (CCTMXTilesetInfo *)0x0) {
    this_00 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
    pCVar3 = (CCTMXTilesetInfo *)CCTextureCache::addImage(this_00,*(char **)(param_1 + 0x2c));
  }
  uVar4 = __fixunssfsi(uVar2);
  iVar5 = CCSpriteBatchNode::initWithTexture((CCSpriteBatchNode *)this,(CCTexture2D *)pCVar3,uVar4);
  if (iVar5 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_001ee874(this + 0x130,param_2 + 0x18);
    *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_2 + 0x30);
    this[0x134] = *(CCTMXLayer *)(param_2 + 0x29);
    uVar9 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    uVar2 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
            ::dictionaryWithDictionary
                      ((CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                        *)uVar9,(CCMutableDictionary *)((ulonglong)uVar9 >> 0x20));
    *(undefined4 *)(this + 300) = uVar2;
    this_01 = (CCDirector *)CCDirector::sharedDirector();
    uVar2 = CCDirector::getContentScaleFactor(this_01);
    *(undefined4 *)(this + 0x154) = uVar2;
    *(CCTMXTilesetInfo **)(this + 0x124) = param_1;
    if (param_1 != (CCTMXTilesetInfo *)0x0) {
      CCObject::retain((CCObject *)param_1);
    }
    puVar6 = (undefined4 *)(**(code **)(*(int *)param_3 + 0x24))(param_3);
    *(undefined4 *)(this + 0x118) = *puVar6;
    *(undefined4 *)(this + 0x11c) = puVar6[1];
    uVar2 = (**(code **)(*(int *)param_3 + 0x14))(param_3);
    *(undefined4 *)(this + 0x128) = uVar2;
    calculateLayerOffset(aCStack_28);
    (**(code **)(*(int *)this + 0x3c))(this,aCStack_28);
    iVar5 = __fixunssfsi(uVar1);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    puVar6 = (undefined4 *)malloc(0xc);
    *puVar6 = 0;
    pvVar7 = malloc(iVar5 << 2);
    puVar6[1] = iVar5;
    puVar6[2] = pvVar7;
    *(undefined4 **)(this + 0x150) = puVar6;
    pcVar8 = *(code **)(*(int *)this + 0x88);
    __mulsf3(*(undefined4 *)(this + 0x110),*(undefined4 *)(this + 0x118));
    uVar9 = __mulsf3(*(undefined4 *)(this + 0x114),*(undefined4 *)(this + 0x11c));
    CCSize::CCSize(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar8)(this,aCStack_20);
    uVar2 = *(undefined4 *)(this + 0x154);
    uVar1 = __divsf3(*(undefined4 *)(this + 0x118),uVar2);
    *(undefined4 *)(this + 0x118) = uVar1;
    uVar1 = __divsf3(*(undefined4 *)(this + 0x11c),uVar2);
    *(undefined4 *)(this + 0x11c) = uVar1;
    this[0x144] = (CCTMXLayer)0x0;
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x148) = 0;
    uVar1 = 1;
  }
  return uVar1;
}


