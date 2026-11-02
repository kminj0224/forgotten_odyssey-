/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014efbe  Symbol: initFromNormalSprite */

/* cocos2d::CCMenuItemSprite::initFromNormalSprite(cocos2d::CCNode*, cocos2d::CCNode*,
   cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

undefined4
cocos2d::CCMenuItemSprite::initFromNormalSprite
          (CCNode *param_1,CCNode *param_2,CCNode *param_3,CCObject *param_4,
          _func_void_CCObject_ptr *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  
  CCMenuItem::initWithTarget((CCObject *)param_1,param_5);
  (**(code **)(*(int *)param_1 + 0x104))(param_1,param_2);
  (**(code **)(*(int *)param_1 + 0x10c))(param_1,param_3);
  (**(code **)(*(int *)param_1 + 0x114))(param_1,param_4);
  pcVar2 = *(code **)(*(int *)param_1 + 0x80);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x7c))();
  (*pcVar2)(param_1,uVar1);
  return 1;
}


