/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163fc4  Symbol: vertexZForPos */

/* cocos2d::CCTMXLayer::vertexZForPos(cocos2d::CCPoint const&) */

CCPoint cocos2d::CCTMXLayer::vertexZForPos(CCPoint *param_1)

{
  CCPoint CVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_r1;
  
  if (*(char *)(param_1 + 0x51) == '\0') {
    CVar1 = param_1[0x50];
  }
  else {
    if (param_1[0x4a] == 0) {
      CVar1 = param_1[0x45];
      uVar2 = in_r1[1];
    }
    else {
      if (param_1[0x4a] != 2) {
        return 0;
      }
      __addsf3(param_1[0x44],param_1[0x45]);
      __fixunssfsi();
      CVar1 = __floatunsisf();
      uVar2 = __addsf3(*in_r1,in_r1[1]);
    }
    iVar3 = __subsf3(CVar1,uVar2);
    CVar1 = __fixsfsi(iVar3 + -0x80000000);
  }
  return CVar1;
}


