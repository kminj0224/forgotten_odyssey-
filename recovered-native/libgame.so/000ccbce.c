/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ccbce  Symbol: removeChildLayer */

/* StageSelect::removeChildLayer() */

void __thiscall StageSelect::removeChildLayer(StageSelect *this)

{
  int iVar1;
  CCNode *pCVar2;
  int *piVar3;
  undefined4 uVar4;
  CCTextureCache *pCVar5;
  code *pcVar6;
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    iVar1 = cocos2d::CCNode::getChildByTag(pCVar2,0x10);
    if (iVar1 != 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      pcVar6 = *(code **)(*piVar3 + 0xd0);
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      uVar4 = cocos2d::CCNode::getChildByTag(pCVar2,0x10);
      (*pcVar6)(piVar3,uVar4,1);
    }
    iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    if (iVar1 != 0) {
      pcVar6 = *(code **)(*(int *)this + 0xd0);
      uVar4 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      (*pcVar6)(this,uVar4,1);
    }
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    KG_removeChild(pCVar2,true);
    pcVar6 = *(code **)(*(int *)this + 0xd0);
    uVar4 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x11);
    (*pcVar6)(this,uVar4,1);
    pCVar5 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    cocos2d::CCTextureCache::removeUnusedTextures(pCVar5);
    pCVar5 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    cocos2d::CCTextureCache::removeAllTextures(pCVar5);
  }
  return;
}


