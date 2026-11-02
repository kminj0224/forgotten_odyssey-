/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b48e  Symbol: lowestAtlasIndexInChild */

/* cocos2d::CCSpriteBatchNode::lowestAtlasIndexInChild(cocos2d::CCSprite*) */

int __thiscall
cocos2d::CCSpriteBatchNode::lowestAtlasIndexInChild(CCSpriteBatchNode *this,CCSprite *param_1)

{
  CCArray *this_00;
  int iVar1;
  
  while ((this_00 = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1),
         this_00 != (CCArray *)0x0 && (iVar1 = CCArray::count(this_00), iVar1 != 0))) {
    param_1 = (CCSprite *)CCArray::objectAtIndex(this_00,0);
  }
  return *(int *)((int)param_1 + 0x10c);
}


