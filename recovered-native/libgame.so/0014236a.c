/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014236a  Symbol: removeChild */

/* cocos2d::CCNode::removeChild(cocos2d::CCNode*, bool) */

void __thiscall cocos2d::CCNode::removeChild(CCNode *this,CCNode *param_1,bool param_2)

{
  int iVar1;
  
  if ((*(CCObject **)(this + 0x40) != (CCObject *)0x0) &&
     (iVar1 = CCArray::containsObject(*(CCObject **)(this + 0x40)), iVar1 != 0)) {
    detachChild(this,param_1,param_2);
  }
  return;
}


