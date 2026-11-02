/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011aa6c  Symbol: Sprite_Touch2 */

/* Sprite_Touch2(cocos2d::CCNode*, cocos2d::CCPoint) */

void Sprite_Touch2(CCNode *param_1,CCPoint param_2)

{
  CCPoint *pCVar1;
  undefined4 in_r2;
  float extraout_s0;
  float extraout_s1;
  CCPoint local_30;
  undefined4 local_2c;
  CCRect local_28;
  undefined4 local_24;
  CCNode aCStack_20 [20];
  
  local_30 = param_2;
  if (param_1 == (CCNode *)0x0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_0011aabc + 0x11aa80));
  }
  pCVar1 = (CCPoint *)__subsf3(*(undefined4 *)(*(int *)(DAT_0011aac0 + 0x11aa90) + 4),in_r2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,extraout_s0,extraout_s1);
  local_30 = local_28;
  local_2c = local_24;
  cocos2d::CCNode::boundingBox(aCStack_20);
  cocos2d::CCRect::CCRectContainsPoint((CCRect *)aCStack_20,&local_30,pCVar1);
  return;
}


