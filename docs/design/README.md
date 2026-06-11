# MQTT-Based Industrial IoT Gateway Design Package

## Purpose

Yocto-generated gateway image that polls serial telemetry from Modbus or CAN simulation, parses frames, and publishes cloud updates over MQTT/TLS.

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/mqtt-industrial-iot-gateway` |
| Primary stack | C++17, C++ Design Patterns, SOLID, Yocto, MQTT, TLS, Modbus, CAN, Serial telemetry |
| Review proof point | Industrial protocol bridging, hardened Linux image ownership, secure MQTT publishing, and cloud-ready telemetry flow. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
