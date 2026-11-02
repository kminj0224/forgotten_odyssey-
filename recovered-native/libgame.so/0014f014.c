/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f014  Symbol: itemFromNormalSprite */

/* cocos2d::CCMenuItemSprite::itemFromNormalSprite(cocos2d::CCNode*, cocos2d::CCNode*,
   cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

int * cocos2d::CCMenuItemSprite::itemFromNormalSprite
                (CCNode *param_1,CCNode *param_2,CCNode *param_3,CCObject *param_4,
                _func_void_CCObject_ptr *param_5)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x120);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  iVar1 = *(int *)(DAT_0014f070 + 0x14f038);
  *this = iVar1 + 8;
  this[0x44] = iVar1 + 0x140;
  this[0x45] = 0;
  this[0x46] = 0;
  this[0x47] = 0;
  initFromNormalSprite
            ((CCNode *)this,param_1,param_2,(CCObject *)param_3,(_func_void_CCObject_ptr *)param_4);
  CCObject::autorelease((CCObject *)this);
  return this;
}


