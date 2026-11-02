/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011aa18  Symbol: Sprite_Touch */

/* Sprite_Touch(cocos2d::CCNode*, cocos2d::CCPoint) */

void Sprite_Touch(CCNode *param_1,CCPoint param_2)

{
  int iVar1;
  CCPoint *pCVar2;
  undefined4 in_r2;
  float extraout_s0;
  float extraout_s1;
  CCPoint local_30;
  undefined4 local_2c;
  CCRect local_28;
  undefined4 local_24;
  CCNode aCStack_20 [20];
  
  if ((param_1 != (CCNode *)0x0) &&
     (local_30 = param_2, local_2c = in_r2, iVar1 = (**(code **)(*(int *)param_1 + 0x68))(),
     iVar1 != 0)) {
    pCVar2 = (CCPoint *)__subsf3(*(undefined4 *)(*(int *)(DAT_0011aa68 + 0x11aa3a) + 4),local_2c);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,extraout_s0,extraout_s1);
    local_30 = local_28;
    local_2c = local_24;
    cocos2d::CCNode::boundingBox(aCStack_20);
    cocos2d::CCRect::CCRectContainsPoint((CCRect *)aCStack_20,&local_30,pCVar2);
  }
  return;
}


