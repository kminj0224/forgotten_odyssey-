/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014230e  Symbol: removeChildByTag */

/* cocos2d::CCNode::removeChildByTag(int, bool) */

void cocos2d::CCNode::removeChildByTag(int param_1,bool param_2)

{
  int iVar1;
  undefined4 in_r2;
  
  iVar1 = getChildByTag((CCNode *)param_1,(uint)param_2);
  if (iVar1 != 0) {
    (**(code **)(*(int *)param_1 + 0xd0))(param_1,iVar1,in_r2);
  }
  return;
}


