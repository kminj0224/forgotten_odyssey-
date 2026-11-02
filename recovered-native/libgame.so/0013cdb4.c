/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cdb4  Symbol: startWithTarget */

/* cocos2d::CCFadeTo::startWithTarget(cocos2d::CCNode*) */

void cocos2d::CCFadeTo::startWithTarget(CCNode *param_1)

{
  CCNode CVar1;
  int *piVar2;
  CCNode *in_r1;
  
  CCActionInterval::startWithTarget((CCActionInterval *)param_1,in_r1);
  if ((in_r1 != (CCNode *)0x0) &&
     (piVar2 = (int *)__dynamic_cast(in_r1,*(undefined4 *)(DAT_0013cde8 + 0x13cdcc),
                                     *(undefined4 *)(DAT_0013cdec + 0x13cdce),0xfffffffe),
     piVar2 != (int *)0x0)) {
    CVar1 = (CCNode)(**(code **)(*piVar2 + 8))();
    param_1[0x2a] = CVar1;
  }
  return;
}


