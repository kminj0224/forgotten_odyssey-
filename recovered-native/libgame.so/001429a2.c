/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001429a2  Symbol: boundingBox */

/* cocos2d::CCNode::boundingBox() */

CCNode * __thiscall cocos2d::CCNode::boundingBox(CCNode *this)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  boundingBoxInPixels();
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(local_28,uVar2);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(local_24,uVar2);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(local_20,uVar2);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar3 = __divsf3(local_1c,uVar2);
  CCRect::CCRect((CCRect *)this,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2,
                 extraout_s3);
  return this;
}


