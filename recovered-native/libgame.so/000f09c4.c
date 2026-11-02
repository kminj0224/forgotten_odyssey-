/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f09c4  Symbol: ~Effect */

/* Effect::~Effect() */

undefined8 __thiscall Effect::~Effect(Effect *this)

{
  CCArray *this_00;
  int *piVar1;
  CCArray *this_01;
  uint uVar2;
  uint uVar3;
  CCObject *this_02;
  CCNode *pCVar4;
  int iVar5;
  CCObject **ppCVar6;
  uint uVar7;
  
  iVar5 = *(int *)(DAT_000f0c3c + 0xf09d0);
  *(int *)this = iVar5 + 8;
  *(int *)(this + 0xfc) = iVar5 + 0x138;
  *(int *)(this + 0x100) = iVar5 + 0x168;
  *(int *)(this + 0x104) = iVar5 + 0x174;
  this_00 = (CCArray *)cocos2d::CCNode::getChildren((CCNode *)this);
  for (uVar7 = 0; uVar3 = cocos2d::CCArray::count(this_00), uVar7 < uVar3; uVar7 = uVar7 + 1) {
    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar7);
    uVar3 = 0;
    this_01 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
    if (this_01 != (CCArray *)0x0) {
      for (; uVar2 = cocos2d::CCArray::count(this_01), uVar3 < uVar2; uVar3 = uVar3 + 1) {
        pCVar4 = (CCNode *)cocos2d::CCArray::objectAtIndex(this_01,uVar3);
        if (pCVar4 != (CCNode *)0x0) {
          KG_removeChild(pCVar4,true);
        }
      }
    }
  }
  if (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x114) !=
      (CCMutableArray<cocos2d::CCSpriteFrame*> *)0x0) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x114),true);
    cocos2d::CCObject::release(*(CCObject **)(this + 0x114));
  }
  if (*(CCObject **)(this + 0x118) != (CCObject *)0x0) {
    cocos2d::CCObject::release(*(CCObject **)(this + 0x118));
  }
  if (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x11c) !=
      (CCMutableArray<cocos2d::CCSpriteFrame*> *)0x0) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x11c),0,true);
    cocos2d::CCObject::release(*(CCObject **)(this + 0x11c));
  }
  if (*(CCObject **)(this + 0x120) != (CCObject *)0x0) {
    cocos2d::CCObject::release(*(CCObject **)(this + 0x120));
  }
  if (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x124) !=
      (CCMutableArray<cocos2d::CCSpriteFrame*> *)0x0) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x124),0,true);
    cocos2d::CCObject::release(*(CCObject **)(this + 0x124));
  }
  if (*(CCObject **)(this + 0x128) != (CCObject *)0x0) {
    cocos2d::CCObject::release(*(CCObject **)(this + 0x128));
  }
  if (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x13c) !=
      (CCMutableArray<cocos2d::CCSpriteFrame*> *)0x0) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x13c),0,true);
    cocos2d::CCObject::release(*(CCObject **)(this + 0x13c));
  }
  if (*(CCObject **)(this + 0x140) != (CCObject *)0x0) {
    cocos2d::CCObject::release(*(CCObject **)(this + 0x140));
  }
  if (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x144) !=
      (CCMutableArray<cocos2d::CCSpriteFrame*> *)0x0) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x144),0,true);
    cocos2d::CCObject::release(*(CCObject **)(this + 0x144));
  }
  if (*(CCObject **)(this + 0x148) != (CCObject *)0x0) {
    cocos2d::CCObject::release(*(CCObject **)(this + 0x148));
  }
  if (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x14c) !=
      (CCMutableArray<cocos2d::CCSpriteFrame*> *)0x0) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
              (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x14c),0,true);
    cocos2d::CCObject::release(*(CCObject **)(this + 0x14c));
  }
  if (*(CCObject **)(this + 0x150) != (CCObject *)0x0) {
    cocos2d::CCObject::release(*(CCObject **)(this + 0x150));
  }
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects
            (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 300),true);
  cocos2d::CCObject::release(*(CCObject **)(this + 300));
  cocos2d::CCObject::release(*(CCObject **)(this + 0x130));
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects
            (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x134),true);
  cocos2d::CCObject::release(*(CCObject **)(this + 0x134));
  iVar5 = DAT_000f0c40;
  cocos2d::CCObject::release(*(CCObject **)(this + 0x138));
  ppCVar6 = *(CCObject ***)(iVar5 + 0xf0b38);
  this_02 = *ppCVar6;
  if (this_02 != (CCObject *)0x0) {
    cocos2d::CCObject::release(this_02);
    *ppCVar6 = (CCObject *)0x0;
  }
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  KG_removeChild(pCVar4,true);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000f0c44);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  KG_removeChild(pCVar4,true);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xaf0);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  KG_removeChild(pCVar4,true);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000f0c48);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  KG_removeChild(pCVar4,true);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000f0c4c);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  KG_removeChild(pCVar4,true);
  if (*(char *)(**(int **)(DAT_000f0c50 + 0xf0bb4) + **(int **)(DAT_000f0c54 + 0xf0bbc) +
                DAT_000f0c58 + 4) == '\x03') {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x14);
    KG_removeChild(pCVar4,true);
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x15);
    KG_removeChild(pCVar4,true);
    iVar5 = 0x16;
  }
  else {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,10);
    KG_removeChild(pCVar4,true);
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
    KG_removeChild(pCVar4,true);
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xc);
    KG_removeChild(pCVar4,true);
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
    KG_removeChild(pCVar4,true);
    iVar5 = 0xe;
  }
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar5);
  KG_removeChild(pCVar4,true);
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return CONCAT44(this,this);
}


