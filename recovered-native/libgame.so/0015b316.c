/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b316  Symbol: visit */

/* cocos2d::CCSpriteBatchNode::visit() */

void __thiscall cocos2d::CCSpriteBatchNode::visit(CCSpriteBatchNode *this)

{
  CCGridBase *pCVar1;
  
  if (this[0x4c] != (CCSpriteBatchNode)0x0) {
    glPushMatrix();
    pCVar1 = *(CCGridBase **)(this + 0x48);
    if ((pCVar1 != (CCGridBase *)0x0) && (pCVar1[0x11] != (CCGridBase)0x0)) {
      CCGridBase::beforeDraw(pCVar1);
      CCNode::transformAncestors((CCNode *)this);
    }
    CCNode::transform((CCNode *)this);
    (**(code **)(*(int *)this + 0xe0))(this);
    pCVar1 = *(CCGridBase **)(this + 0x48);
    if ((pCVar1 != (CCGridBase *)0x0) && (pCVar1[0x11] != (CCGridBase)0x0)) {
      CCGridBase::afterDraw(pCVar1,(CCNode *)this);
    }
    glPopMatrix();
  }
  return;
}


