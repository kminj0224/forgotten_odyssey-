/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150c10  Symbol: begin */

/* cocos2d::CCRenderTexture::begin() */

void __thiscall cocos2d::CCRenderTexture::begin(CCRenderTexture *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  glPushMatrix();
  puVar1 = (undefined4 *)(**(code **)(**(int **)(this + 0x108) + 0x24))();
  CCDirector::sharedDirector();
  CCDirector::getDisplaySizeInPixels();
  uVar2 = __divsf3(local_20,*puVar1);
  uVar3 = __divsf3(local_1c,puVar1[1]);
  uVar4 = __divsf3(DAT_00150cd4,uVar2);
  uVar2 = __divsf3(0x3f800000,uVar2);
  uVar5 = __divsf3(DAT_00150cd4,uVar3);
  uVar3 = __divsf3(0x3f800000,uVar3);
  glOrthof(uVar4,uVar2,uVar5,uVar3,DAT_00150cd4,0x3f800000);
  uVar2 = __fixsfsi(*puVar1);
  uVar3 = __fixsfsi(puVar1[1]);
  glViewport(0,0,uVar2,uVar3);
  glGetIntegerv(DAT_00150cd8,this + 0x104);
  glBindFramebufferOES(DAT_00150cdc,*(undefined4 *)(this + 0x100));
  glEnableClientState(DAT_00150ce0);
  glEnableClientState(DAT_00150ce4);
  glEnableClientState(DAT_00150ce8);
  glEnable(DAT_00150cec);
  return;
}


