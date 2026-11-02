/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160a8c  Symbol: drawAtPoint */

/* cocos2d::CCTexture2D::drawAtPoint(cocos2d::CCPoint const&) */

void __thiscall cocos2d::CCTexture2D::drawAtPoint(CCTexture2D *this,CCPoint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCPoint CVar3;
  undefined4 uVar4;
  CCPoint CVar5;
  undefined auStack_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  CCPoint local_48;
  CCPoint local_44;
  undefined4 local_3c;
  CCPoint local_38;
  CCPoint local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  memset(auStack_68,0,0x20);
  uVar4 = *(undefined4 *)(this + 0x30);
  uVar2 = *(undefined4 *)(this + 0x2c);
  local_64 = uVar4;
  local_60 = uVar2;
  local_5c = uVar4;
  local_50 = uVar2;
  uVar1 = __floatunsisf(*(undefined4 *)(this + 0x18));
  uVar1 = __mulsf3(uVar1,uVar2);
  uVar2 = __floatunsisf(*(undefined4 *)(this + 0x1c));
  uVar2 = __mulsf3(uVar2,uVar4);
  memset(&local_48,0,0x30);
  CVar3 = *param_1;
  CVar5 = param_1[1];
  local_48 = CVar3;
  local_44 = CVar5;
  uVar4 = __addsf3(uVar1,CVar3);
  local_3c = uVar4;
  local_38 = CVar5;
  local_30 = CVar3;
  local_2c = __addsf3(uVar2,CVar5);
  uVar1 = DAT_00160b28;
  local_24 = uVar4;
  local_20 = local_2c;
  glBindTexture(DAT_00160b2c,*(undefined4 *)(this + 0x20));
  glVertexPointer(3,uVar1,0,&local_48);
  glTexCoordPointer(2,uVar1,0,auStack_68);
  glDrawArrays(5,0,4);
  return;
}


