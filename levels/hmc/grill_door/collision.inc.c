// 0x0702B65C - 0x0702B6E0
const Collision hmc_seg7_collision_grill_door[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x8),
    COL_VERTEX(410, 0, 51),
    COL_VERTEX(410, 719, -50), // 819 changed to 719 in non-JP builds
    COL_VERTEX(410, 719, 51),
    COL_VERTEX(0, 719, 51),
    COL_VERTEX(0, 0, 51),
    COL_VERTEX(0, 719, -50),
    COL_VERTEX(410, 0, -50),
    COL_VERTEX(0, 0, -50),
    COL_TRI_INIT(SURFACE_DEFAULT, 12),
    COL_TRI(0, 1, 2),
    COL_TRI(2, 3, 4),
    COL_TRI(2, 4, 0),
    COL_TRI(2, 1, 5),
    COL_TRI(2, 5, 3),
    COL_TRI(6, 5, 1),
    COL_TRI(0, 6, 1),
    COL_TRI(6, 7, 5),
    COL_TRI(3, 5, 7),
    COL_TRI(3, 7, 4),
    COL_TRI(4, 7, 6),
    COL_TRI(4, 6, 0),
    COL_TRI_STOP(),
    COL_END(),
};
