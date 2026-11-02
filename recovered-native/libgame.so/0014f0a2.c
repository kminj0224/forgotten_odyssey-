/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f0a2  Symbol: initFromNormalImage */

/* cocos2d::CCMenuItemImage::initFromNormalImage(char const*, char const*, char const*,
   cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

void cocos2d::CCMenuItemImage::initFromNormalImage
               (char *param_1,char *param_2,char *param_3,CCObject *param_4,
               _func_void_CCObject_ptr *param_5)

{
  CCNode *pCVar1;
  
  pCVar1 = (CCNode *)CCSprite::spriteWithFile(param_2);
  if (param_3 != (char *)0x0) {
    param_3 = (char *)CCSprite::spriteWithFile(param_3);
  }
  if (param_4 != (CCObject *)0x0) {
    param_4 = (CCObject *)CCSprite::spriteWithFile((char *)param_4);
  }
  CCMenuItemSprite::initFromNormalSprite((CCNode *)param_1,pCVar1,(CCNode *)param_3,param_4,param_5)
  ;
  return;
}


