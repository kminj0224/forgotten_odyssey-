/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b464  Symbol: highestAtlasIndexInChild */

/* cocos2d::CCSpriteBatchNode::highestAtlasIndexInChild(cocos2d::CCSprite*) */

int __thiscall
cocos2d::CCSpriteBatchNode::highestAtlasIndexInChild(CCSpriteBatchNode *this,CCSprite *param_1)

{
  CCArray *this_00;
  int iVar1;
  
  while ((this_00 = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1),
         this_00 != (CCArray *)0x0 && (iVar1 = CCArray::count(this_00), iVar1 != 0))) {
    param_1 = (CCSprite *)CCArray::lastObject(this_00);
  }
  return *(int *)((int)param_1 + 0x10c);
}


