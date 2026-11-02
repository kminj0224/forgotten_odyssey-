/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160b30  Symbol: drawInRect */

/* cocos2d::CCTexture2D::drawInRect(cocos2d::CCRect const&) */

void __thiscall cocos2d::CCTexture2D::drawInRect(CCTexture2D *this,CCRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCRect CVar3;
  CCRect CVar4;
  undefined auStack_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  CCRect local_38;
  CCRect local_34;
  undefined4 local_30;
  CCRect local_2c;
  CCRect local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  memset(auStack_58,0,0x20);
  CVar3 = *param_1;
  local_54 = *(undefined4 *)(this + 0x30);
  local_50 = *(undefined4 *)(this + 0x2c);
  CVar4 = param_1[1];
  local_4c = local_54;
  local_40 = local_50;
  local_38 = CVar3;
  local_34 = CVar4;
  uVar2 = __addsf3(CVar3,param_1[2]);
  local_30 = uVar2;
  local_2c = CVar4;
  local_28 = CVar3;
  local_24 = __addsf3(CVar4,param_1[3]);
  uVar1 = DAT_00160ba8;
  local_20 = uVar2;
  local_1c = local_24;
  glBindTexture(DAT_00160bac,*(undefined4 *)(this + 0x20));
  glVertexPointer(2,uVar1,0,&local_38);
  glTexCoordPointer(2,uVar1,0,auStack_58);
  glDrawArrays(5,0,4);
  return;
}


