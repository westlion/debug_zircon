// DO NOT EDIT THIS FILE
// Generated from system/uapp/psutils/memgraph-schema.json
#pragma once
static const char kMemgraphSchema[] = R":JSON:(
{
    "$schema": "http://json-schema.org/draft-04/schema#",

    "type": "array",
    "items": {
        "anyOf": [
            { "$ref": "#/definitions/meta" },
            { "$ref": "#/definitions/kernel" },
            { "$ref": "#/definitions/job" },
            { "$ref": "#/definitions/process" },
            { "$ref": "#/definitions/thread" }
        ]
    },

    "definitions": {
        "meta": {
            "type": "object",
            "properties": {
                "type": {
                    "type": "string",
                    "pattern": "^__"
                },
                "timestamp": {
                    "type": "string",
                    "format": "date-time"
                }
            },
            "required": [ "type" ]
        },
        "_node": {
            "type": "object",
            "properties": {
                "id": { "type": "string" },
                "type": { "type": "string" },
                "parent": { "type": "string" },
                "name": { "type": "string" }
            },
            "required": [ "id", "type", "parent", "name" ]
        },
        "kernel": {
            "allOf": [
                { "$ref": "#/definitions/_node" },
                {
                    "properties": {
                        "id": { "type": "string", "pattern": "^kernel/.*" },
                        "type": { "type": "string", "pattern": "^kernel$" },
                        "size_bytes": { "type": "integer" }
                    },
                    "required": [ "size_bytes" ]
                }
            ]
        },
        "_task": {
            "allOf": [
                { "$ref": "#/definitions/_node" },
                {
                    "properties": {
                        "koid": { "type": "integer" }
                    },
                    "required": [ "koid" ]
                }
            ]
        },
        "job": {
            "allOf": [
                { "$ref": "#/definitions/_task" },
                {
                    "properties": {
                        "id": { "type": "string", "pattern": "^j/.*" },
                        "type": { "type": "string", "pattern": "^j$" }
                    }
                }
            ]
        },
        "process": {
            "allOf": [
                { "$ref": "#/definitions/_task" },
                {
                    "properties": {
                        "id": { "type": "string", "pattern": "^p/.*" },
                        "type": { "type": "string", "pattern": "^p$" },
                        "private_bytes": { "type": "integer" },
                        "shared_bytes": { "type": "integer" },
                        "pss_bytes": { "type": "integer" },
                        "vmos": {
                            "type": "array",
                            "items": { "$ref": "#/definitions/vmo" }
                        },
                        "vmo_refs": {
                            "type": "array",
                            "items": { "$ref": "#/definitions/vmo_ref" }
                        },
                        "handle_stats": {
                            "type": "object",
                            "patternProperties": {
                                "[a-zA-Z0-9_]+": {
                                    "type": "integer"
                                }
                            }
                        }
                    },
                    "required": [ "private_bytes", "shared_bytes", "pss_bytes" ]
                }
            ]
        },
        "thread": {
            "allOf": [
                { "$ref": "#/definitions/_task" },
                {
                    "properties": {
                        "id": { "type": "string", "pattern": "^t/.*" },
                        "type": { "type": "string", "pattern": "^t$" },
                        "state": { "type": "string" }
                    },
                    "required": [ "state" ]
                }
            ]
        },
        "vmo": {
            "type": "object",
            "properties": {
                "koid": { "type": "integer" },
                "name": { "type": "string" },
                "size_bytes": { "type": "integer" },
                "parent_koid": { "type": "integer" },
                "num_children": { "type": "integer" },
                "num_mappings": { "type": "integer" },
                "share_count": { "type": "integer" },
                "committed_bytes": { "type": "integer" }
            },
            "required": [ "koid" ]
        },
        "vmo_ref": {
            "type": "object",
            "properties": {
                "vmo_koid": { "type": "integer" },
                "via": {
                    "type": "array",
                    "items": { "type": "string" }
                },
                "handle_rights": {
                    "type": "array",
                    "items": { "type": "string" }
                }
            },
            "required": [ "vmo_koid", "via" ]
        }
    }
}
):JSON:";
