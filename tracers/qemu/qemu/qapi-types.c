/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * deallocation functions for schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 *
 * Authors:
 *  Anthony Liguori   <aliguori@us.ibm.com>
 *  Michael Roth      <mdroth@linux.vnet.ibm.com>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 *
 */

#include "qapi/dealloc-visitor.h"
#include "qapi-types.h"
#include "qapi-visit.h"

const char *const ACPISlotType_lookup[] = {
    [ACPI_SLOT_TYPE_DIMM] = "DIMM",
    [ACPI_SLOT_TYPE_MAX] = NULL,
};

const char *const ActionCompletionMode_lookup[] = {
    [ACTION_COMPLETION_MODE_INDIVIDUAL] = "individual",
    [ACTION_COMPLETION_MODE_GROUPED] = "grouped",
    [ACTION_COMPLETION_MODE_MAX] = NULL,
};

const char *const BiosAtaTranslation_lookup[] = {
    [BIOS_ATA_TRANSLATION_AUTO] = "auto",
    [BIOS_ATA_TRANSLATION_NONE] = "none",
    [BIOS_ATA_TRANSLATION_LBA] = "lba",
    [BIOS_ATA_TRANSLATION_LARGE] = "large",
    [BIOS_ATA_TRANSLATION_RECHS] = "rechs",
    [BIOS_ATA_TRANSLATION_MAX] = NULL,
};

const char *const BlkdebugEvent_lookup[] = {
    [BLKDEBUG_EVENT_L1_UPDATE] = "l1_update",
    [BLKDEBUG_EVENT_L1_GROW_ALLOC_TABLE] = "l1_grow.alloc_table",
    [BLKDEBUG_EVENT_L1_GROW_WRITE_TABLE] = "l1_grow.write_table",
    [BLKDEBUG_EVENT_L1_GROW_ACTIVATE_TABLE] = "l1_grow.activate_table",
    [BLKDEBUG_EVENT_L2_LOAD] = "l2_load",
    [BLKDEBUG_EVENT_L2_UPDATE] = "l2_update",
    [BLKDEBUG_EVENT_L2_UPDATE_COMPRESSED] = "l2_update_compressed",
    [BLKDEBUG_EVENT_L2_ALLOC_COW_READ] = "l2_alloc.cow_read",
    [BLKDEBUG_EVENT_L2_ALLOC_WRITE] = "l2_alloc.write",
    [BLKDEBUG_EVENT_READ_AIO] = "read_aio",
    [BLKDEBUG_EVENT_READ_BACKING_AIO] = "read_backing_aio",
    [BLKDEBUG_EVENT_READ_COMPRESSED] = "read_compressed",
    [BLKDEBUG_EVENT_WRITE_AIO] = "write_aio",
    [BLKDEBUG_EVENT_WRITE_COMPRESSED] = "write_compressed",
    [BLKDEBUG_EVENT_VMSTATE_LOAD] = "vmstate_load",
    [BLKDEBUG_EVENT_VMSTATE_SAVE] = "vmstate_save",
    [BLKDEBUG_EVENT_COW_READ] = "cow_read",
    [BLKDEBUG_EVENT_COW_WRITE] = "cow_write",
    [BLKDEBUG_EVENT_REFTABLE_LOAD] = "reftable_load",
    [BLKDEBUG_EVENT_REFTABLE_GROW] = "reftable_grow",
    [BLKDEBUG_EVENT_REFTABLE_UPDATE] = "reftable_update",
    [BLKDEBUG_EVENT_REFBLOCK_LOAD] = "refblock_load",
    [BLKDEBUG_EVENT_REFBLOCK_UPDATE] = "refblock_update",
    [BLKDEBUG_EVENT_REFBLOCK_UPDATE_PART] = "refblock_update_part",
    [BLKDEBUG_EVENT_REFBLOCK_ALLOC] = "refblock_alloc",
    [BLKDEBUG_EVENT_REFBLOCK_ALLOC_HOOKUP] = "refblock_alloc.hookup",
    [BLKDEBUG_EVENT_REFBLOCK_ALLOC_WRITE] = "refblock_alloc.write",
    [BLKDEBUG_EVENT_REFBLOCK_ALLOC_WRITE_BLOCKS] = "refblock_alloc.write_blocks",
    [BLKDEBUG_EVENT_REFBLOCK_ALLOC_WRITE_TABLE] = "refblock_alloc.write_table",
    [BLKDEBUG_EVENT_REFBLOCK_ALLOC_SWITCH_TABLE] = "refblock_alloc.switch_table",
    [BLKDEBUG_EVENT_CLUSTER_ALLOC] = "cluster_alloc",
    [BLKDEBUG_EVENT_CLUSTER_ALLOC_BYTES] = "cluster_alloc_bytes",
    [BLKDEBUG_EVENT_CLUSTER_FREE] = "cluster_free",
    [BLKDEBUG_EVENT_FLUSH_TO_OS] = "flush_to_os",
    [BLKDEBUG_EVENT_FLUSH_TO_DISK] = "flush_to_disk",
    [BLKDEBUG_EVENT_PWRITEV_RMW_HEAD] = "pwritev_rmw.head",
    [BLKDEBUG_EVENT_PWRITEV_RMW_AFTER_HEAD] = "pwritev_rmw.after_head",
    [BLKDEBUG_EVENT_PWRITEV_RMW_TAIL] = "pwritev_rmw.tail",
    [BLKDEBUG_EVENT_PWRITEV_RMW_AFTER_TAIL] = "pwritev_rmw.after_tail",
    [BLKDEBUG_EVENT_PWRITEV] = "pwritev",
    [BLKDEBUG_EVENT_PWRITEV_ZERO] = "pwritev_zero",
    [BLKDEBUG_EVENT_PWRITEV_DONE] = "pwritev_done",
    [BLKDEBUG_EVENT_EMPTY_IMAGE_PREPARE] = "empty_image_prepare",
    [BLKDEBUG_EVENT_MAX] = NULL,
};

const char *const BlockDeviceIoStatus_lookup[] = {
    [BLOCK_DEVICE_IO_STATUS_OK] = "ok",
    [BLOCK_DEVICE_IO_STATUS_FAILED] = "failed",
    [BLOCK_DEVICE_IO_STATUS_NOSPACE] = "nospace",
    [BLOCK_DEVICE_IO_STATUS_MAX] = NULL,
};

const char *const BlockErrorAction_lookup[] = {
    [BLOCK_ERROR_ACTION_IGNORE] = "ignore",
    [BLOCK_ERROR_ACTION_REPORT] = "report",
    [BLOCK_ERROR_ACTION_STOP] = "stop",
    [BLOCK_ERROR_ACTION_MAX] = NULL,
};

const char *const BlockJobType_lookup[] = {
    [BLOCK_JOB_TYPE_COMMIT] = "commit",
    [BLOCK_JOB_TYPE_STREAM] = "stream",
    [BLOCK_JOB_TYPE_MIRROR] = "mirror",
    [BLOCK_JOB_TYPE_BACKUP] = "backup",
    [BLOCK_JOB_TYPE_MAX] = NULL,
};

const char *const BlockdevAioOptions_lookup[] = {
    [BLOCKDEV_AIO_OPTIONS_THREADS] = "threads",
    [BLOCKDEV_AIO_OPTIONS_NATIVE] = "native",
    [BLOCKDEV_AIO_OPTIONS_MAX] = NULL,
};

const char *const BlockdevChangeReadOnlyMode_lookup[] = {
    [BLOCKDEV_CHANGE_READ_ONLY_MODE_RETAIN] = "retain",
    [BLOCKDEV_CHANGE_READ_ONLY_MODE_READ_ONLY] = "read-only",
    [BLOCKDEV_CHANGE_READ_ONLY_MODE_READ_WRITE] = "read-write",
    [BLOCKDEV_CHANGE_READ_ONLY_MODE_MAX] = NULL,
};

const char *const BlockdevDetectZeroesOptions_lookup[] = {
    [BLOCKDEV_DETECT_ZEROES_OPTIONS_OFF] = "off",
    [BLOCKDEV_DETECT_ZEROES_OPTIONS_ON] = "on",
    [BLOCKDEV_DETECT_ZEROES_OPTIONS_UNMAP] = "unmap",
    [BLOCKDEV_DETECT_ZEROES_OPTIONS_MAX] = NULL,
};

const char *const BlockdevDiscardOptions_lookup[] = {
    [BLOCKDEV_DISCARD_OPTIONS_IGNORE] = "ignore",
    [BLOCKDEV_DISCARD_OPTIONS_UNMAP] = "unmap",
    [BLOCKDEV_DISCARD_OPTIONS_MAX] = NULL,
};

const char *const BlockdevDriver_lookup[] = {
    [BLOCKDEV_DRIVER_ARCHIPELAGO] = "archipelago",
    [BLOCKDEV_DRIVER_BLKDEBUG] = "blkdebug",
    [BLOCKDEV_DRIVER_BLKVERIFY] = "blkverify",
    [BLOCKDEV_DRIVER_BOCHS] = "bochs",
    [BLOCKDEV_DRIVER_CLOOP] = "cloop",
    [BLOCKDEV_DRIVER_DMG] = "dmg",
    [BLOCKDEV_DRIVER_FILE] = "file",
    [BLOCKDEV_DRIVER_FTP] = "ftp",
    [BLOCKDEV_DRIVER_FTPS] = "ftps",
    [BLOCKDEV_DRIVER_HOST_CDROM] = "host_cdrom",
    [BLOCKDEV_DRIVER_HOST_DEVICE] = "host_device",
    [BLOCKDEV_DRIVER_HTTP] = "http",
    [BLOCKDEV_DRIVER_HTTPS] = "https",
    [BLOCKDEV_DRIVER_NULL_AIO] = "null-aio",
    [BLOCKDEV_DRIVER_NULL_CO] = "null-co",
    [BLOCKDEV_DRIVER_PARALLELS] = "parallels",
    [BLOCKDEV_DRIVER_QCOW] = "qcow",
    [BLOCKDEV_DRIVER_QCOW2] = "qcow2",
    [BLOCKDEV_DRIVER_QED] = "qed",
    [BLOCKDEV_DRIVER_QUORUM] = "quorum",
    [BLOCKDEV_DRIVER_RAW] = "raw",
    [BLOCKDEV_DRIVER_TFTP] = "tftp",
    [BLOCKDEV_DRIVER_VDI] = "vdi",
    [BLOCKDEV_DRIVER_VHDX] = "vhdx",
    [BLOCKDEV_DRIVER_VMDK] = "vmdk",
    [BLOCKDEV_DRIVER_VPC] = "vpc",
    [BLOCKDEV_DRIVER_VVFAT] = "vvfat",
    [BLOCKDEV_DRIVER_MAX] = NULL,
};

const char *const BlockdevOnError_lookup[] = {
    [BLOCKDEV_ON_ERROR_REPORT] = "report",
    [BLOCKDEV_ON_ERROR_IGNORE] = "ignore",
    [BLOCKDEV_ON_ERROR_ENOSPC] = "enospc",
    [BLOCKDEV_ON_ERROR_STOP] = "stop",
    [BLOCKDEV_ON_ERROR_MAX] = NULL,
};

const int BlockdevRef_qtypes[QTYPE_MAX] = {
    [QTYPE_QDICT] = BLOCKDEV_REF_KIND_DEFINITION,
    [QTYPE_QSTRING] = BLOCKDEV_REF_KIND_REFERENCE,
};

const char *const BlockdevRefKind_lookup[] = {
    [BLOCKDEV_REF_KIND_DEFINITION] = "definition",
    [BLOCKDEV_REF_KIND_REFERENCE] = "reference",
    [BLOCKDEV_REF_KIND_MAX] = NULL,
};

const char *const ChardevBackendKind_lookup[] = {
    [CHARDEV_BACKEND_KIND_FILE] = "file",
    [CHARDEV_BACKEND_KIND_SERIAL] = "serial",
    [CHARDEV_BACKEND_KIND_PARALLEL] = "parallel",
    [CHARDEV_BACKEND_KIND_PIPE] = "pipe",
    [CHARDEV_BACKEND_KIND_SOCKET] = "socket",
    [CHARDEV_BACKEND_KIND_UDP] = "udp",
    [CHARDEV_BACKEND_KIND_PTY] = "pty",
    [CHARDEV_BACKEND_KIND_NULL] = "null",
    [CHARDEV_BACKEND_KIND_MUX] = "mux",
    [CHARDEV_BACKEND_KIND_MSMOUSE] = "msmouse",
    [CHARDEV_BACKEND_KIND_BRAILLE] = "braille",
    [CHARDEV_BACKEND_KIND_TESTDEV] = "testdev",
    [CHARDEV_BACKEND_KIND_STDIO] = "stdio",
    [CHARDEV_BACKEND_KIND_CONSOLE] = "console",
    [CHARDEV_BACKEND_KIND_SPICEVMC] = "spicevmc",
    [CHARDEV_BACKEND_KIND_SPICEPORT] = "spiceport",
    [CHARDEV_BACKEND_KIND_VC] = "vc",
    [CHARDEV_BACKEND_KIND_RINGBUF] = "ringbuf",
    [CHARDEV_BACKEND_KIND_MEMORY] = "memory",
    [CHARDEV_BACKEND_KIND_MAX] = NULL,
};

const char *const CommandLineParameterType_lookup[] = {
    [COMMAND_LINE_PARAMETER_TYPE_STRING] = "string",
    [COMMAND_LINE_PARAMETER_TYPE_BOOLEAN] = "boolean",
    [COMMAND_LINE_PARAMETER_TYPE_NUMBER] = "number",
    [COMMAND_LINE_PARAMETER_TYPE_SIZE] = "size",
    [COMMAND_LINE_PARAMETER_TYPE_MAX] = NULL,
};

const char *const DataFormat_lookup[] = {
    [DATA_FORMAT_UTF8] = "utf8",
    [DATA_FORMAT_BASE64] = "base64",
    [DATA_FORMAT_MAX] = NULL,
};

const char *const DirtyBitmapStatus_lookup[] = {
    [DIRTY_BITMAP_STATUS_ACTIVE] = "active",
    [DIRTY_BITMAP_STATUS_DISABLED] = "disabled",
    [DIRTY_BITMAP_STATUS_FROZEN] = "frozen",
    [DIRTY_BITMAP_STATUS_MAX] = NULL,
};

const char *const DumpGuestMemoryFormat_lookup[] = {
    [DUMP_GUEST_MEMORY_FORMAT_ELF] = "elf",
    [DUMP_GUEST_MEMORY_FORMAT_KDUMP_ZLIB] = "kdump-zlib",
    [DUMP_GUEST_MEMORY_FORMAT_KDUMP_LZO] = "kdump-lzo",
    [DUMP_GUEST_MEMORY_FORMAT_KDUMP_SNAPPY] = "kdump-snappy",
    [DUMP_GUEST_MEMORY_FORMAT_MAX] = NULL,
};

const char *const ErrorClass_lookup[] = {
    [ERROR_CLASS_GENERIC_ERROR] = "GenericError",
    [ERROR_CLASS_COMMAND_NOT_FOUND] = "CommandNotFound",
    [ERROR_CLASS_DEVICE_ENCRYPTED] = "DeviceEncrypted",
    [ERROR_CLASS_DEVICE_NOT_ACTIVE] = "DeviceNotActive",
    [ERROR_CLASS_DEVICE_NOT_FOUND] = "DeviceNotFound",
    [ERROR_CLASS_KVM_MISSING_CAP] = "KVMMissingCap",
    [ERROR_CLASS_MAX] = NULL,
};

const char *const GuestPanicAction_lookup[] = {
    [GUEST_PANIC_ACTION_PAUSE] = "pause",
    [GUEST_PANIC_ACTION_MAX] = NULL,
};

const char *const HostMemPolicy_lookup[] = {
    [HOST_MEM_POLICY_DEFAULT] = "default",
    [HOST_MEM_POLICY_PREFERRED] = "preferred",
    [HOST_MEM_POLICY_BIND] = "bind",
    [HOST_MEM_POLICY_INTERLEAVE] = "interleave",
    [HOST_MEM_POLICY_MAX] = NULL,
};

const char *const ImageInfoSpecificKind_lookup[] = {
    [IMAGE_INFO_SPECIFIC_KIND_QCOW2] = "qcow2",
    [IMAGE_INFO_SPECIFIC_KIND_VMDK] = "vmdk",
    [IMAGE_INFO_SPECIFIC_KIND_MAX] = NULL,
};

const char *const InputAxis_lookup[] = {
    [INPUT_AXIS_X] = "X",
    [INPUT_AXIS_Y] = "Y",
    [INPUT_AXIS_MAX] = NULL,
};

const char *const InputButton_lookup[] = {
    [INPUT_BUTTON_LEFT] = "Left",
    [INPUT_BUTTON_MIDDLE] = "Middle",
    [INPUT_BUTTON_RIGHT] = "Right",
    [INPUT_BUTTON_WHEEL_UP] = "WheelUp",
    [INPUT_BUTTON_WHEEL_DOWN] = "WheelDown",
    [INPUT_BUTTON_MAX] = NULL,
};

const char *const InputEventKind_lookup[] = {
    [INPUT_EVENT_KIND_KEY] = "key",
    [INPUT_EVENT_KIND_BTN] = "btn",
    [INPUT_EVENT_KIND_REL] = "rel",
    [INPUT_EVENT_KIND_ABS] = "abs",
    [INPUT_EVENT_KIND_MAX] = NULL,
};

const char *const IoOperationType_lookup[] = {
    [IO_OPERATION_TYPE_READ] = "read",
    [IO_OPERATION_TYPE_WRITE] = "write",
    [IO_OPERATION_TYPE_MAX] = NULL,
};

const char *const JSONType_lookup[] = {
    [JSON_TYPE_STRING] = "string",
    [JSON_TYPE_NUMBER] = "number",
    [JSON_TYPE_INT] = "int",
    [JSON_TYPE_BOOLEAN] = "boolean",
    [JSON_TYPE_NULL] = "null",
    [JSON_TYPE_OBJECT] = "object",
    [JSON_TYPE_ARRAY] = "array",
    [JSON_TYPE_VALUE] = "value",
    [JSON_TYPE_MAX] = NULL,
};

const char *const KeyValueKind_lookup[] = {
    [KEY_VALUE_KIND_NUMBER] = "number",
    [KEY_VALUE_KIND_QCODE] = "qcode",
    [KEY_VALUE_KIND_MAX] = NULL,
};

const char *const LostTickPolicy_lookup[] = {
    [LOST_TICK_POLICY_DISCARD] = "discard",
    [LOST_TICK_POLICY_DELAY] = "delay",
    [LOST_TICK_POLICY_MERGE] = "merge",
    [LOST_TICK_POLICY_SLEW] = "slew",
    [LOST_TICK_POLICY_MAX] = NULL,
};

const char *const MemoryDeviceInfoKind_lookup[] = {
    [MEMORY_DEVICE_INFO_KIND_DIMM] = "dimm",
    [MEMORY_DEVICE_INFO_KIND_MAX] = NULL,
};

const char *const MigrationCapability_lookup[] = {
    [MIGRATION_CAPABILITY_XBZRLE] = "xbzrle",
    [MIGRATION_CAPABILITY_RDMA_PIN_ALL] = "rdma-pin-all",
    [MIGRATION_CAPABILITY_AUTO_CONVERGE] = "auto-converge",
    [MIGRATION_CAPABILITY_ZERO_BLOCKS] = "zero-blocks",
    [MIGRATION_CAPABILITY_COMPRESS] = "compress",
    [MIGRATION_CAPABILITY_EVENTS] = "events",
    [MIGRATION_CAPABILITY_X_POSTCOPY_RAM] = "x-postcopy-ram",
    [MIGRATION_CAPABILITY_MAX] = NULL,
};

const char *const MigrationParameter_lookup[] = {
    [MIGRATION_PARAMETER_COMPRESS_LEVEL] = "compress-level",
    [MIGRATION_PARAMETER_COMPRESS_THREADS] = "compress-threads",
    [MIGRATION_PARAMETER_DECOMPRESS_THREADS] = "decompress-threads",
    [MIGRATION_PARAMETER_X_CPU_THROTTLE_INITIAL] = "x-cpu-throttle-initial",
    [MIGRATION_PARAMETER_X_CPU_THROTTLE_INCREMENT] = "x-cpu-throttle-increment",
    [MIGRATION_PARAMETER_MAX] = NULL,
};

const char *const MigrationStatus_lookup[] = {
    [MIGRATION_STATUS_NONE] = "none",
    [MIGRATION_STATUS_SETUP] = "setup",
    [MIGRATION_STATUS_CANCELLING] = "cancelling",
    [MIGRATION_STATUS_CANCELLED] = "cancelled",
    [MIGRATION_STATUS_ACTIVE] = "active",
    [MIGRATION_STATUS_POSTCOPY_ACTIVE] = "postcopy-active",
    [MIGRATION_STATUS_COMPLETED] = "completed",
    [MIGRATION_STATUS_FAILED] = "failed",
    [MIGRATION_STATUS_MAX] = NULL,
};

const char *const MirrorSyncMode_lookup[] = {
    [MIRROR_SYNC_MODE_TOP] = "top",
    [MIRROR_SYNC_MODE_FULL] = "full",
    [MIRROR_SYNC_MODE_NONE] = "none",
    [MIRROR_SYNC_MODE_INCREMENTAL] = "incremental",
    [MIRROR_SYNC_MODE_MAX] = NULL,
};

const char *const NetClientOptionsKind_lookup[] = {
    [NET_CLIENT_OPTIONS_KIND_NONE] = "none",
    [NET_CLIENT_OPTIONS_KIND_NIC] = "nic",
    [NET_CLIENT_OPTIONS_KIND_USER] = "user",
    [NET_CLIENT_OPTIONS_KIND_TAP] = "tap",
    [NET_CLIENT_OPTIONS_KIND_L2TPV3] = "l2tpv3",
    [NET_CLIENT_OPTIONS_KIND_SOCKET] = "socket",
    [NET_CLIENT_OPTIONS_KIND_VDE] = "vde",
    [NET_CLIENT_OPTIONS_KIND_DUMP] = "dump",
    [NET_CLIENT_OPTIONS_KIND_BRIDGE] = "bridge",
    [NET_CLIENT_OPTIONS_KIND_HUBPORT] = "hubport",
    [NET_CLIENT_OPTIONS_KIND_NETMAP] = "netmap",
    [NET_CLIENT_OPTIONS_KIND_VHOST_USER] = "vhost-user",
    [NET_CLIENT_OPTIONS_KIND_MAX] = NULL,
};

const char *const NetFilterDirection_lookup[] = {
    [NET_FILTER_DIRECTION_ALL] = "all",
    [NET_FILTER_DIRECTION_RX] = "rx",
    [NET_FILTER_DIRECTION_TX] = "tx",
    [NET_FILTER_DIRECTION_MAX] = NULL,
};

const char *const NetworkAddressFamily_lookup[] = {
    [NETWORK_ADDRESS_FAMILY_IPV4] = "ipv4",
    [NETWORK_ADDRESS_FAMILY_IPV6] = "ipv6",
    [NETWORK_ADDRESS_FAMILY_UNIX] = "unix",
    [NETWORK_ADDRESS_FAMILY_UNKNOWN] = "unknown",
    [NETWORK_ADDRESS_FAMILY_MAX] = NULL,
};

const char *const NewImageMode_lookup[] = {
    [NEW_IMAGE_MODE_EXISTING] = "existing",
    [NEW_IMAGE_MODE_ABSOLUTE_PATHS] = "absolute-paths",
    [NEW_IMAGE_MODE_MAX] = NULL,
};

const char *const NumaOptionsKind_lookup[] = {
    [NUMA_OPTIONS_KIND_NODE] = "node",
    [NUMA_OPTIONS_KIND_MAX] = NULL,
};

const char *const OnOffAuto_lookup[] = {
    [ON_OFF_AUTO_AUTO] = "auto",
    [ON_OFF_AUTO_ON] = "on",
    [ON_OFF_AUTO_OFF] = "off",
    [ON_OFF_AUTO_MAX] = NULL,
};

const char *const PreallocMode_lookup[] = {
    [PREALLOC_MODE_OFF] = "off",
    [PREALLOC_MODE_METADATA] = "metadata",
    [PREALLOC_MODE_FALLOC] = "falloc",
    [PREALLOC_MODE_FULL] = "full",
    [PREALLOC_MODE_MAX] = NULL,
};

const char *const QCryptoTLSCredsEndpoint_lookup[] = {
    [QCRYPTO_TLS_CREDS_ENDPOINT_CLIENT] = "client",
    [QCRYPTO_TLS_CREDS_ENDPOINT_SERVER] = "server",
    [QCRYPTO_TLS_CREDS_ENDPOINT_MAX] = NULL,
};

const char *const QKeyCode_lookup[] = {
    [Q_KEY_CODE_UNMAPPED] = "unmapped",
    [Q_KEY_CODE_SHIFT] = "shift",
    [Q_KEY_CODE_SHIFT_R] = "shift_r",
    [Q_KEY_CODE_ALT] = "alt",
    [Q_KEY_CODE_ALT_R] = "alt_r",
    [Q_KEY_CODE_ALTGR] = "altgr",
    [Q_KEY_CODE_ALTGR_R] = "altgr_r",
    [Q_KEY_CODE_CTRL] = "ctrl",
    [Q_KEY_CODE_CTRL_R] = "ctrl_r",
    [Q_KEY_CODE_MENU] = "menu",
    [Q_KEY_CODE_ESC] = "esc",
    [Q_KEY_CODE_1] = "1",
    [Q_KEY_CODE_2] = "2",
    [Q_KEY_CODE_3] = "3",
    [Q_KEY_CODE_4] = "4",
    [Q_KEY_CODE_5] = "5",
    [Q_KEY_CODE_6] = "6",
    [Q_KEY_CODE_7] = "7",
    [Q_KEY_CODE_8] = "8",
    [Q_KEY_CODE_9] = "9",
    [Q_KEY_CODE_0] = "0",
    [Q_KEY_CODE_MINUS] = "minus",
    [Q_KEY_CODE_EQUAL] = "equal",
    [Q_KEY_CODE_BACKSPACE] = "backspace",
    [Q_KEY_CODE_TAB] = "tab",
    [Q_KEY_CODE_Q] = "q",
    [Q_KEY_CODE_W] = "w",
    [Q_KEY_CODE_E] = "e",
    [Q_KEY_CODE_R] = "r",
    [Q_KEY_CODE_T] = "t",
    [Q_KEY_CODE_Y] = "y",
    [Q_KEY_CODE_U] = "u",
    [Q_KEY_CODE_I] = "i",
    [Q_KEY_CODE_O] = "o",
    [Q_KEY_CODE_P] = "p",
    [Q_KEY_CODE_BRACKET_LEFT] = "bracket_left",
    [Q_KEY_CODE_BRACKET_RIGHT] = "bracket_right",
    [Q_KEY_CODE_RET] = "ret",
    [Q_KEY_CODE_A] = "a",
    [Q_KEY_CODE_S] = "s",
    [Q_KEY_CODE_D] = "d",
    [Q_KEY_CODE_F] = "f",
    [Q_KEY_CODE_G] = "g",
    [Q_KEY_CODE_H] = "h",
    [Q_KEY_CODE_J] = "j",
    [Q_KEY_CODE_K] = "k",
    [Q_KEY_CODE_L] = "l",
    [Q_KEY_CODE_SEMICOLON] = "semicolon",
    [Q_KEY_CODE_APOSTROPHE] = "apostrophe",
    [Q_KEY_CODE_GRAVE_ACCENT] = "grave_accent",
    [Q_KEY_CODE_BACKSLASH] = "backslash",
    [Q_KEY_CODE_Z] = "z",
    [Q_KEY_CODE_X] = "x",
    [Q_KEY_CODE_C] = "c",
    [Q_KEY_CODE_V] = "v",
    [Q_KEY_CODE_B] = "b",
    [Q_KEY_CODE_N] = "n",
    [Q_KEY_CODE_M] = "m",
    [Q_KEY_CODE_COMMA] = "comma",
    [Q_KEY_CODE_DOT] = "dot",
    [Q_KEY_CODE_SLASH] = "slash",
    [Q_KEY_CODE_ASTERISK] = "asterisk",
    [Q_KEY_CODE_SPC] = "spc",
    [Q_KEY_CODE_CAPS_LOCK] = "caps_lock",
    [Q_KEY_CODE_F1] = "f1",
    [Q_KEY_CODE_F2] = "f2",
    [Q_KEY_CODE_F3] = "f3",
    [Q_KEY_CODE_F4] = "f4",
    [Q_KEY_CODE_F5] = "f5",
    [Q_KEY_CODE_F6] = "f6",
    [Q_KEY_CODE_F7] = "f7",
    [Q_KEY_CODE_F8] = "f8",
    [Q_KEY_CODE_F9] = "f9",
    [Q_KEY_CODE_F10] = "f10",
    [Q_KEY_CODE_NUM_LOCK] = "num_lock",
    [Q_KEY_CODE_SCROLL_LOCK] = "scroll_lock",
    [Q_KEY_CODE_KP_DIVIDE] = "kp_divide",
    [Q_KEY_CODE_KP_MULTIPLY] = "kp_multiply",
    [Q_KEY_CODE_KP_SUBTRACT] = "kp_subtract",
    [Q_KEY_CODE_KP_ADD] = "kp_add",
    [Q_KEY_CODE_KP_ENTER] = "kp_enter",
    [Q_KEY_CODE_KP_DECIMAL] = "kp_decimal",
    [Q_KEY_CODE_SYSRQ] = "sysrq",
    [Q_KEY_CODE_KP_0] = "kp_0",
    [Q_KEY_CODE_KP_1] = "kp_1",
    [Q_KEY_CODE_KP_2] = "kp_2",
    [Q_KEY_CODE_KP_3] = "kp_3",
    [Q_KEY_CODE_KP_4] = "kp_4",
    [Q_KEY_CODE_KP_5] = "kp_5",
    [Q_KEY_CODE_KP_6] = "kp_6",
    [Q_KEY_CODE_KP_7] = "kp_7",
    [Q_KEY_CODE_KP_8] = "kp_8",
    [Q_KEY_CODE_KP_9] = "kp_9",
    [Q_KEY_CODE_LESS] = "less",
    [Q_KEY_CODE_F11] = "f11",
    [Q_KEY_CODE_F12] = "f12",
    [Q_KEY_CODE_PRINT] = "print",
    [Q_KEY_CODE_HOME] = "home",
    [Q_KEY_CODE_PGUP] = "pgup",
    [Q_KEY_CODE_PGDN] = "pgdn",
    [Q_KEY_CODE_END] = "end",
    [Q_KEY_CODE_LEFT] = "left",
    [Q_KEY_CODE_UP] = "up",
    [Q_KEY_CODE_DOWN] = "down",
    [Q_KEY_CODE_RIGHT] = "right",
    [Q_KEY_CODE_INSERT] = "insert",
    [Q_KEY_CODE_DELETE] = "delete",
    [Q_KEY_CODE_STOP] = "stop",
    [Q_KEY_CODE_AGAIN] = "again",
    [Q_KEY_CODE_PROPS] = "props",
    [Q_KEY_CODE_UNDO] = "undo",
    [Q_KEY_CODE_FRONT] = "front",
    [Q_KEY_CODE_COPY] = "copy",
    [Q_KEY_CODE_OPEN] = "open",
    [Q_KEY_CODE_PASTE] = "paste",
    [Q_KEY_CODE_FIND] = "find",
    [Q_KEY_CODE_CUT] = "cut",
    [Q_KEY_CODE_LF] = "lf",
    [Q_KEY_CODE_HELP] = "help",
    [Q_KEY_CODE_META_L] = "meta_l",
    [Q_KEY_CODE_META_R] = "meta_r",
    [Q_KEY_CODE_COMPOSE] = "compose",
    [Q_KEY_CODE_PAUSE] = "pause",
    [Q_KEY_CODE_RO] = "ro",
    [Q_KEY_CODE_KP_COMMA] = "kp_comma",
    [Q_KEY_CODE_MAX] = NULL,
};

const char *const Qcow2OverlapCheckMode_lookup[] = {
    [QCOW2_OVERLAP_CHECK_MODE_NONE] = "none",
    [QCOW2_OVERLAP_CHECK_MODE_CONSTANT] = "constant",
    [QCOW2_OVERLAP_CHECK_MODE_CACHED] = "cached",
    [QCOW2_OVERLAP_CHECK_MODE_ALL] = "all",
    [QCOW2_OVERLAP_CHECK_MODE_MAX] = NULL,
};

const int Qcow2OverlapChecks_qtypes[QTYPE_MAX] = {
    [QTYPE_QDICT] = QCOW2_OVERLAP_CHECKS_KIND_FLAGS,
    [QTYPE_QSTRING] = QCOW2_OVERLAP_CHECKS_KIND_MODE,
};

const char *const Qcow2OverlapChecksKind_lookup[] = {
    [QCOW2_OVERLAP_CHECKS_KIND_FLAGS] = "flags",
    [QCOW2_OVERLAP_CHECKS_KIND_MODE] = "mode",
    [QCOW2_OVERLAP_CHECKS_KIND_MAX] = NULL,
};

const char *const QuorumReadPattern_lookup[] = {
    [QUORUM_READ_PATTERN_QUORUM] = "quorum",
    [QUORUM_READ_PATTERN_FIFO] = "fifo",
    [QUORUM_READ_PATTERN_MAX] = NULL,
};

const char *const ReplayMode_lookup[] = {
    [REPLAY_MODE_NONE] = "none",
    [REPLAY_MODE_RECORD] = "record",
    [REPLAY_MODE_PLAY] = "play",
    [REPLAY_MODE_MAX] = NULL,
};

const char *const RockerPortAutoneg_lookup[] = {
    [ROCKER_PORT_AUTONEG_OFF] = "off",
    [ROCKER_PORT_AUTONEG_ON] = "on",
    [ROCKER_PORT_AUTONEG_MAX] = NULL,
};

const char *const RockerPortDuplex_lookup[] = {
    [ROCKER_PORT_DUPLEX_HALF] = "half",
    [ROCKER_PORT_DUPLEX_FULL] = "full",
    [ROCKER_PORT_DUPLEX_MAX] = NULL,
};

const char *const RunState_lookup[] = {
    [RUN_STATE_DEBUG] = "debug",
    [RUN_STATE_INMIGRATE] = "inmigrate",
    [RUN_STATE_INTERNAL_ERROR] = "internal-error",
    [RUN_STATE_IO_ERROR] = "io-error",
    [RUN_STATE_PAUSED] = "paused",
    [RUN_STATE_POSTMIGRATE] = "postmigrate",
    [RUN_STATE_PRELAUNCH] = "prelaunch",
    [RUN_STATE_FINISH_MIGRATE] = "finish-migrate",
    [RUN_STATE_RESTORE_VM] = "restore-vm",
    [RUN_STATE_RUNNING] = "running",
    [RUN_STATE_SAVE_VM] = "save-vm",
    [RUN_STATE_SHUTDOWN] = "shutdown",
    [RUN_STATE_SUSPENDED] = "suspended",
    [RUN_STATE_WATCHDOG] = "watchdog",
    [RUN_STATE_GUEST_PANICKED] = "guest-panicked",
    [RUN_STATE_MAX] = NULL,
};

const char *const RxState_lookup[] = {
    [RX_STATE_NORMAL] = "normal",
    [RX_STATE_NONE] = "none",
    [RX_STATE_ALL] = "all",
    [RX_STATE_MAX] = NULL,
};

const char *const SchemaMetaType_lookup[] = {
    [SCHEMA_META_TYPE_BUILTIN] = "builtin",
    [SCHEMA_META_TYPE_ENUM] = "enum",
    [SCHEMA_META_TYPE_ARRAY] = "array",
    [SCHEMA_META_TYPE_OBJECT] = "object",
    [SCHEMA_META_TYPE_ALTERNATE] = "alternate",
    [SCHEMA_META_TYPE_COMMAND] = "command",
    [SCHEMA_META_TYPE_EVENT] = "event",
    [SCHEMA_META_TYPE_MAX] = NULL,
};

const char *const SocketAddressKind_lookup[] = {
    [SOCKET_ADDRESS_KIND_INET] = "inet",
    [SOCKET_ADDRESS_KIND_UNIX] = "unix",
    [SOCKET_ADDRESS_KIND_FD] = "fd",
    [SOCKET_ADDRESS_KIND_MAX] = NULL,
};

const char *const SpiceQueryMouseMode_lookup[] = {
    [SPICE_QUERY_MOUSE_MODE_CLIENT] = "client",
    [SPICE_QUERY_MOUSE_MODE_SERVER] = "server",
    [SPICE_QUERY_MOUSE_MODE_UNKNOWN] = "unknown",
    [SPICE_QUERY_MOUSE_MODE_MAX] = NULL,
};

const char *const TpmModel_lookup[] = {
    [TPM_MODEL_TPM_TIS] = "tpm-tis",
    [TPM_MODEL_MAX] = NULL,
};

const char *const TpmType_lookup[] = {
    [TPM_TYPE_PASSTHROUGH] = "passthrough",
    [TPM_TYPE_MAX] = NULL,
};

const char *const TpmTypeOptionsKind_lookup[] = {
    [TPM_TYPE_OPTIONS_KIND_PASSTHROUGH] = "passthrough",
    [TPM_TYPE_OPTIONS_KIND_MAX] = NULL,
};

const char *const TraceEventState_lookup[] = {
    [TRACE_EVENT_STATE_UNAVAILABLE] = "unavailable",
    [TRACE_EVENT_STATE_DISABLED] = "disabled",
    [TRACE_EVENT_STATE_ENABLED] = "enabled",
    [TRACE_EVENT_STATE_MAX] = NULL,
};

const char *const TransactionActionKind_lookup[] = {
    [TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT] = "blockdev-snapshot",
    [TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_SYNC] = "blockdev-snapshot-sync",
    [TRANSACTION_ACTION_KIND_DRIVE_BACKUP] = "drive-backup",
    [TRANSACTION_ACTION_KIND_BLOCKDEV_BACKUP] = "blockdev-backup",
    [TRANSACTION_ACTION_KIND_ABORT] = "abort",
    [TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_INTERNAL_SYNC] = "blockdev-snapshot-internal-sync",
    [TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ADD] = "block-dirty-bitmap-add",
    [TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_CLEAR] = "block-dirty-bitmap-clear",
    [TRANSACTION_ACTION_KIND_MAX] = NULL,
};

const char *const VncPrimaryAuth_lookup[] = {
    [VNC_PRIMARY_AUTH_NONE] = "none",
    [VNC_PRIMARY_AUTH_VNC] = "vnc",
    [VNC_PRIMARY_AUTH_RA2] = "ra2",
    [VNC_PRIMARY_AUTH_RA2NE] = "ra2ne",
    [VNC_PRIMARY_AUTH_TIGHT] = "tight",
    [VNC_PRIMARY_AUTH_ULTRA] = "ultra",
    [VNC_PRIMARY_AUTH_TLS] = "tls",
    [VNC_PRIMARY_AUTH_VENCRYPT] = "vencrypt",
    [VNC_PRIMARY_AUTH_SASL] = "sasl",
    [VNC_PRIMARY_AUTH_MAX] = NULL,
};

const char *const VncVencryptSubAuth_lookup[] = {
    [VNC_VENCRYPT_SUB_AUTH_PLAIN] = "plain",
    [VNC_VENCRYPT_SUB_AUTH_TLS_NONE] = "tls-none",
    [VNC_VENCRYPT_SUB_AUTH_X509_NONE] = "x509-none",
    [VNC_VENCRYPT_SUB_AUTH_TLS_VNC] = "tls-vnc",
    [VNC_VENCRYPT_SUB_AUTH_X509_VNC] = "x509-vnc",
    [VNC_VENCRYPT_SUB_AUTH_TLS_PLAIN] = "tls-plain",
    [VNC_VENCRYPT_SUB_AUTH_X509_PLAIN] = "x509-plain",
    [VNC_VENCRYPT_SUB_AUTH_TLS_SASL] = "tls-sasl",
    [VNC_VENCRYPT_SUB_AUTH_X509_SASL] = "x509-sasl",
    [VNC_VENCRYPT_SUB_AUTH_MAX] = NULL,
};

const char *const WatchdogExpirationAction_lookup[] = {
    [WATCHDOG_EXPIRATION_ACTION_RESET] = "reset",
    [WATCHDOG_EXPIRATION_ACTION_SHUTDOWN] = "shutdown",
    [WATCHDOG_EXPIRATION_ACTION_POWEROFF] = "poweroff",
    [WATCHDOG_EXPIRATION_ACTION_PAUSE] = "pause",
    [WATCHDOG_EXPIRATION_ACTION_DEBUG] = "debug",
    [WATCHDOG_EXPIRATION_ACTION_NONE] = "none",
    [WATCHDOG_EXPIRATION_ACTION_INJECT_NMI] = "inject-nmi",
    [WATCHDOG_EXPIRATION_ACTION_MAX] = NULL,
};

const char *const X86CPURegister32_lookup[] = {
    [X86_CPU_REGISTER32_EAX] = "EAX",
    [X86_CPU_REGISTER32_EBX] = "EBX",
    [X86_CPU_REGISTER32_ECX] = "ECX",
    [X86_CPU_REGISTER32_EDX] = "EDX",
    [X86_CPU_REGISTER32_ESP] = "ESP",
    [X86_CPU_REGISTER32_EBP] = "EBP",
    [X86_CPU_REGISTER32_ESI] = "ESI",
    [X86_CPU_REGISTER32_EDI] = "EDI",
    [X86_CPU_REGISTER32_MAX] = NULL,
};

void qapi_free_ACPIOSTInfo(ACPIOSTInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ACPIOSTInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ACPIOSTInfoList(ACPIOSTInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ACPIOSTInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_Abort(Abort *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_Abort(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_AcpiTableOptions(AcpiTableOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_AcpiTableOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_AddfdInfo(AddfdInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_AddfdInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BalloonInfo(BalloonInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BalloonInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlkdebugInjectErrorOptions(BlkdebugInjectErrorOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlkdebugInjectErrorOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlkdebugInjectErrorOptionsList(BlkdebugInjectErrorOptionsList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlkdebugInjectErrorOptionsList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlkdebugSetStateOptions(BlkdebugSetStateOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlkdebugSetStateOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlkdebugSetStateOptionsList(BlkdebugSetStateOptionsList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlkdebugSetStateOptionsList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDeviceInfo(BlockDeviceInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDeviceInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDeviceInfoList(BlockDeviceInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDeviceInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDeviceMapEntry(BlockDeviceMapEntry *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDeviceMapEntry(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDeviceStats(BlockDeviceStats *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDeviceStats(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDeviceTimedStats(BlockDeviceTimedStats *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDeviceTimedStats(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDeviceTimedStatsList(BlockDeviceTimedStatsList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDeviceTimedStatsList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDirtyBitmap(BlockDirtyBitmap *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDirtyBitmap(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDirtyBitmapAdd(BlockDirtyBitmapAdd *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDirtyBitmapAdd(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDirtyInfo(BlockDirtyInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDirtyInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockDirtyInfoList(BlockDirtyInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockDirtyInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockInfo(BlockInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockInfoList(BlockInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockJobInfo(BlockJobInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockJobInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockJobInfoList(BlockJobInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockJobInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockStats(BlockStats *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockStats(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockStatsList(BlockStatsList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockStatsList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevBackup(BlockdevBackup *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevBackup(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevCacheInfo(BlockdevCacheInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevCacheInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevCacheOptions(BlockdevCacheOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevCacheOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptions(BlockdevOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsArchipelago(BlockdevOptionsArchipelago *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsArchipelago(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsBase(BlockdevOptionsBase *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsBase(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsBlkdebug(BlockdevOptionsBlkdebug *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsBlkdebug(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsBlkverify(BlockdevOptionsBlkverify *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsBlkverify(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsFile(BlockdevOptionsFile *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsFile(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsGenericCOWFormat(BlockdevOptionsGenericCOWFormat *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsGenericCOWFormat(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsGenericFormat(BlockdevOptionsGenericFormat *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsGenericFormat(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsNull(BlockdevOptionsNull *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsNull(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsQcow2(BlockdevOptionsQcow2 *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsQcow2(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsQuorum(BlockdevOptionsQuorum *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsQuorum(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevOptionsVVFAT(BlockdevOptionsVVFAT *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevOptionsVVFAT(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevRef(BlockdevRef *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevRef(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevRefList(BlockdevRefList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevRefList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevSnapshot(BlockdevSnapshot *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevSnapshot(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevSnapshotInternal(BlockdevSnapshotInternal *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevSnapshotInternal(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_BlockdevSnapshotSync(BlockdevSnapshotSync *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_BlockdevSnapshotSync(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevBackend(ChardevBackend *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevBackend(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevBackendInfo(ChardevBackendInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevBackendInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevBackendInfoList(ChardevBackendInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevBackendInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevDummy(ChardevDummy *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevDummy(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevFile(ChardevFile *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevFile(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevHostdev(ChardevHostdev *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevHostdev(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevInfo(ChardevInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevInfoList(ChardevInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevMux(ChardevMux *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevMux(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevReturn(ChardevReturn *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevReturn(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevRingbuf(ChardevRingbuf *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevRingbuf(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevSocket(ChardevSocket *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevSocket(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevSpiceChannel(ChardevSpiceChannel *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevSpiceChannel(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevSpicePort(ChardevSpicePort *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevSpicePort(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevStdio(ChardevStdio *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevStdio(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevUdp(ChardevUdp *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevUdp(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ChardevVC(ChardevVC *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ChardevVC(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CommandInfo(CommandInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CommandInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CommandInfoList(CommandInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CommandInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CommandLineOptionInfo(CommandLineOptionInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CommandLineOptionInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CommandLineOptionInfoList(CommandLineOptionInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CommandLineOptionInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CommandLineParameterInfo(CommandLineParameterInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CommandLineParameterInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CommandLineParameterInfoList(CommandLineParameterInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CommandLineParameterInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CpuDefinitionInfo(CpuDefinitionInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CpuDefinitionInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CpuDefinitionInfoList(CpuDefinitionInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CpuDefinitionInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CpuInfo(CpuInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CpuInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_CpuInfoList(CpuInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_CpuInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_DevicePropertyInfo(DevicePropertyInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_DevicePropertyInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_DevicePropertyInfoList(DevicePropertyInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_DevicePropertyInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_DriveBackup(DriveBackup *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_DriveBackup(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_DummyForceArrays(DummyForceArrays *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_DummyForceArrays(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_DumpGuestMemoryCapability(DumpGuestMemoryCapability *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_DumpGuestMemoryCapability(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_DumpGuestMemoryFormatList(DumpGuestMemoryFormatList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_DumpGuestMemoryFormatList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_EventInfo(EventInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_EventInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_EventInfoList(EventInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_EventInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_FdsetFdInfo(FdsetFdInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_FdsetFdInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_FdsetFdInfoList(FdsetFdInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_FdsetFdInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_FdsetInfo(FdsetInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_FdsetInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_FdsetInfoList(FdsetInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_FdsetInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_IOThreadInfo(IOThreadInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_IOThreadInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_IOThreadInfoList(IOThreadInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_IOThreadInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ImageCheck(ImageCheck *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ImageCheck(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ImageInfo(ImageInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ImageInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ImageInfoList(ImageInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ImageInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ImageInfoSpecific(ImageInfoSpecific *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ImageInfoSpecific(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ImageInfoSpecificQCow2(ImageInfoSpecificQCow2 *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ImageInfoSpecificQCow2(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ImageInfoSpecificVmdk(ImageInfoSpecificVmdk *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ImageInfoSpecificVmdk(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_InetSocketAddress(InetSocketAddress *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_InetSocketAddress(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_InputBtnEvent(InputBtnEvent *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_InputBtnEvent(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_InputEvent(InputEvent *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_InputEvent(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_InputEventList(InputEventList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_InputEventList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_InputKeyEvent(InputKeyEvent *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_InputKeyEvent(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_InputMoveEvent(InputMoveEvent *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_InputMoveEvent(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_KeyValue(KeyValue *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_KeyValue(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_KeyValueList(KeyValueList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_KeyValueList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_KvmInfo(KvmInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_KvmInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MachineInfo(MachineInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MachineInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MachineInfoList(MachineInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MachineInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_Memdev(Memdev *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_Memdev(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MemdevList(MemdevList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MemdevList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MemoryDeviceInfo(MemoryDeviceInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MemoryDeviceInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MemoryDeviceInfoList(MemoryDeviceInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MemoryDeviceInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MigrationCapabilityStatus(MigrationCapabilityStatus *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MigrationCapabilityStatus(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MigrationCapabilityStatusList(MigrationCapabilityStatusList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MigrationCapabilityStatusList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MigrationInfo(MigrationInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MigrationInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MigrationParameters(MigrationParameters *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MigrationParameters(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MigrationStats(MigrationStats *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MigrationStats(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MouseInfo(MouseInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MouseInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_MouseInfoList(MouseInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_MouseInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NameInfo(NameInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NameInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetClientOptions(NetClientOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetClientOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetLegacy(NetLegacy *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetLegacy(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetLegacyNicOptions(NetLegacyNicOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetLegacyNicOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_Netdev(Netdev *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_Netdev(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevBridgeOptions(NetdevBridgeOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevBridgeOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevDumpOptions(NetdevDumpOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevDumpOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevHubPortOptions(NetdevHubPortOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevHubPortOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevL2TPv3Options(NetdevL2TPv3Options *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevL2TPv3Options(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevNetmapOptions(NetdevNetmapOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevNetmapOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevNoneOptions(NetdevNoneOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevNoneOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevSocketOptions(NetdevSocketOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevSocketOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevTapOptions(NetdevTapOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevTapOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevUserOptions(NetdevUserOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevUserOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevVdeOptions(NetdevVdeOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevVdeOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NetdevVhostUserOptions(NetdevVhostUserOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NetdevVhostUserOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NumaNodeOptions(NumaNodeOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NumaNodeOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_NumaOptions(NumaOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_NumaOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ObjectPropertyInfo(ObjectPropertyInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ObjectPropertyInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ObjectPropertyInfoList(ObjectPropertyInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ObjectPropertyInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ObjectTypeInfo(ObjectTypeInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ObjectTypeInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_ObjectTypeInfoList(ObjectTypeInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_ObjectTypeInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PCDIMMDeviceInfo(PCDIMMDeviceInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PCDIMMDeviceInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciBridgeInfo(PciBridgeInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciBridgeInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciBusInfo(PciBusInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciBusInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciDeviceClass(PciDeviceClass *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciDeviceClass(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciDeviceId(PciDeviceId *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciDeviceId(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciDeviceInfo(PciDeviceInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciDeviceInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciDeviceInfoList(PciDeviceInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciDeviceInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciInfo(PciInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciInfoList(PciInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciMemoryRange(PciMemoryRange *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciMemoryRange(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciMemoryRegion(PciMemoryRegion *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciMemoryRegion(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_PciMemoryRegionList(PciMemoryRegionList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_PciMemoryRegionList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_Qcow2OverlapCheckFlags(Qcow2OverlapCheckFlags *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_Qcow2OverlapCheckFlags(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_Qcow2OverlapChecks(Qcow2OverlapChecks *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_Qcow2OverlapChecks(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerOfDpaFlow(RockerOfDpaFlow *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerOfDpaFlow(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerOfDpaFlowAction(RockerOfDpaFlowAction *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerOfDpaFlowAction(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerOfDpaFlowKey(RockerOfDpaFlowKey *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerOfDpaFlowKey(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerOfDpaFlowList(RockerOfDpaFlowList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerOfDpaFlowList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerOfDpaFlowMask(RockerOfDpaFlowMask *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerOfDpaFlowMask(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerOfDpaGroup(RockerOfDpaGroup *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerOfDpaGroup(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerOfDpaGroupList(RockerOfDpaGroupList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerOfDpaGroupList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerPort(RockerPort *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerPort(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerPortList(RockerPortList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerPortList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RockerSwitch(RockerSwitch *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RockerSwitch(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RxFilterInfo(RxFilterInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RxFilterInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_RxFilterInfoList(RxFilterInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_RxFilterInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfo(SchemaInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoAlternate(SchemaInfoAlternate *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoAlternate(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoAlternateMember(SchemaInfoAlternateMember *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoAlternateMember(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoAlternateMemberList(SchemaInfoAlternateMemberList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoAlternateMemberList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoArray(SchemaInfoArray *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoArray(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoBase(SchemaInfoBase *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoBase(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoBuiltin(SchemaInfoBuiltin *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoBuiltin(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoCommand(SchemaInfoCommand *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoCommand(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoEnum(SchemaInfoEnum *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoEnum(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoEvent(SchemaInfoEvent *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoEvent(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoList(SchemaInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoObject(SchemaInfoObject *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoObject(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoObjectMember(SchemaInfoObjectMember *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoObjectMember(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoObjectMemberList(SchemaInfoObjectMemberList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoObjectMemberList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoObjectVariant(SchemaInfoObjectVariant *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoObjectVariant(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SchemaInfoObjectVariantList(SchemaInfoObjectVariantList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SchemaInfoObjectVariantList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SnapshotInfo(SnapshotInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SnapshotInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SnapshotInfoList(SnapshotInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SnapshotInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SocketAddress(SocketAddress *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SocketAddress(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SpiceBasicInfo(SpiceBasicInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SpiceBasicInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SpiceChannel(SpiceChannel *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SpiceChannel(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SpiceChannelList(SpiceChannelList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SpiceChannelList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SpiceInfo(SpiceInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SpiceInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_SpiceServerInfo(SpiceServerInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_SpiceServerInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_StatusInfo(StatusInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_StatusInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_String(String *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_String(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_StringList(StringList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_StringList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TPMInfo(TPMInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TPMInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TPMInfoList(TPMInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TPMInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TPMPassthroughOptions(TPMPassthroughOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TPMPassthroughOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TargetInfo(TargetInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TargetInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TpmModelList(TpmModelList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TpmModelList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TpmTypeList(TpmTypeList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TpmTypeList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TpmTypeOptions(TpmTypeOptions *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TpmTypeOptions(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TraceEventInfo(TraceEventInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TraceEventInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TraceEventInfoList(TraceEventInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TraceEventInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TransactionAction(TransactionAction *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TransactionAction(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TransactionActionList(TransactionActionList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TransactionActionList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_TransactionProperties(TransactionProperties *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_TransactionProperties(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_UnixSocketAddress(UnixSocketAddress *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_UnixSocketAddress(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_UuidInfo(UuidInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_UuidInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VersionInfo(VersionInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VersionInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VersionTriple(VersionTriple *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VersionTriple(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VncBasicInfo(VncBasicInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VncBasicInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VncBasicInfoList(VncBasicInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VncBasicInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VncClientInfo(VncClientInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VncClientInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VncClientInfoList(VncClientInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VncClientInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VncInfo(VncInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VncInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VncInfo2(VncInfo2 *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VncInfo2(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VncInfo2List(VncInfo2List *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VncInfo2List(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_VncServerInfo(VncServerInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_VncServerInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_X86CPUFeatureWordInfo(X86CPUFeatureWordInfo *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_X86CPUFeatureWordInfo(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_X86CPUFeatureWordInfoList(X86CPUFeatureWordInfoList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_X86CPUFeatureWordInfoList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_XBZRLECacheStats(XBZRLECacheStats *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_XBZRLECacheStats(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_anyList(anyList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_anyList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_boolList(boolList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_boolList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_int16List(int16List *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_int16List(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_int32List(int32List *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_int32List(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_int64List(int64List *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_int64List(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_int8List(int8List *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_int8List(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_intList(intList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_intList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_numberList(numberList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_numberList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_sizeList(sizeList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_sizeList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_strList(strList *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_strList(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_uint16List(uint16List *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_uint16List(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_uint32List(uint32List *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_uint32List(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_uint64List(uint64List *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_uint64List(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}

void qapi_free_uint8List(uint8List *obj)
{
    QapiDeallocVisitor *qdv;
    Visitor *v;

    if (!obj) {
        return;
    }

    qdv = qapi_dealloc_visitor_new();
    v = qapi_dealloc_get_visitor(qdv);
    visit_type_uint8List(v, &obj, NULL, NULL);
    qapi_dealloc_visitor_cleanup(qdv);
}
